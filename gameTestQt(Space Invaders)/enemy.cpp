#include <enemy.h>
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h> //rand() -> really large int
#include "player.h"
#include "enemy.h"
#include "game.h"

extern Game * game;

Enemy::Enemy(QGraphicsItem * parent): QObject(), QGraphicsPixmapItem(parent)
{
    //set posittion
    int  random_number = rand() % 700;
    setPos(random_number,0);

    //draw the rect
    setPixmap(QPixmap(":/images/enemy.png"));
    setTransformOriginPoint(50,50);
    setRotation(180);

    // connect
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void Enemy::move()
{
    // move enemy down
    setPos(x(),y()+5);

    //destroy enemy when it goes out of the screen
    if (pos().y() > 600)
    {
        game->health->decrease();

        scene()->removeItem(this);
        delete this;
    }

    //if enemy collides with player, destroy both but keep it on with 1 less live

    QList<QGraphicsItem *>colliding_items = collidingItems();
    for(int i = 0 ,n = colliding_items.size(); i < n; ++i)
    {
        if(typeid(*(colliding_items[i])) == typeid(Enemy))
        {
            //decrease lives

            game->health->decrease();

            //remove them both

            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);

            //respawn just the player

            player = new Player();
            player->setPos(400,500);

        }
    }

}
