#include "player.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include "bullet.h"
#include "enemy.h"

Player::Player(QGraphicsItem * parent): QGraphicsPixmapItem(parent)
{
    bulletSound = new QMediaPlayer();
    bulletSound->setMedia(QUrl("qrc:/sounds/gun-shot.mp3"));

    //set graphic
    setPixmap(QPixmap(":/images/player.png"));
}

void Player::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left)
    {
        if (pos().x() > 0)
        setPos(x()-10,y());

    }
    else if (event->key() == Qt::Key_Right)
    {
        if (pos().x() + 100 < 800)
        setPos(x()+10,y());
    }
    else if (event->key() == Qt::Key_Space)
    {
        //create a bullet
        Bullet * bullet = new Bullet();
        bullet->setPos(x(),y());
        scene()->addItem(bullet);

        //play bulletsound
        if(bulletSound->state() == QMediaPlayer::PlayingState)
        {
            bulletSound->setPosition(0);
        }
        else if (bulletSound->state() == QMediaPlayer::StoppedState)
        {
            bulletSound->play();
        }
    }
}

void Player::spawn()
{
    //create enemy
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);
}
