#include "health.h"
#include <QFont>


Health::Health(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    //initialize score to 0
    health = 3;

    //draw score
    setPlainText(QString("Health: ") + QString::number(health)); //Health = 0
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));
}

void Health::decrease()
{
    health--;
    setPlainText(QString("Health: ") + QString::number(health)); //Health = 1

}

int Health::getHealth()
{
    return health;
}
