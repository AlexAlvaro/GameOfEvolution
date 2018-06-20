#include <QFont>
#include "score.h"


Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    //initialize score to 0
    score = 0;

    //draw score
    setPlainText(QString("Score: ") + QString::number(score)); //score = 0
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));
}

void Score::increase()
{
    score++;
    setPlainText(QString("Score: ") + QString::number(score)); //score = 1

}

int Score::getScore()
{
    return score;
}
