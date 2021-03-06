#ifndef SERPPART_H
#define SERPPART_H

#include <QGraphicsPixmapItem>

class SerpPart : public QGraphicsPixmapItem
{
public:
    SerpPart(QGraphicsItem* parent=0);

    SerpPart* Preced();
    void setPreced(SerpPart* valeur);

    SerpPart* Suiv();
    void setSuiv(SerpPart* valeur);

    QString Direction();
    void setDirection(QString valeur);

    void move();
    void ajouterDerrier();
    void checkCollidingObject();

    QString part;
    void setImage();

    QString image;
    void setImage(QString valeur);
    int pas;

private:

    SerpPart* suiv;
    SerpPart* preced;
    QString direction;
};

#endif // SERPPART_H
