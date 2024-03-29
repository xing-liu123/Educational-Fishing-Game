#ifndef HITLISTENER_H
#define HITLISTENER_H

/**
 * Team: BAGJL
 * Students: Brittney Morales, Adriana Salazar, Xing Liu, Jinwen Lei, Gonzalo Tello
 * Course: CS3505
 * Date: April 26, 2022
 *
 **/

#include <Box2D/Box2D.h>
#include <QObject>
#include <vector>


class HitListener: public QObject, public b2ContactListener
{
    Q_OBJECT

public:
    HitListener();
    bool destroy = false;
    std::vector<b2Body*> getBodyVector();
    bool getDestroy();
    void setDestroy(bool);
    //create some vector that holds
    std::vector<b2Body*> bodiesToRemove;
    virtual void BeginContact(b2Contact* contact);

signals:
    void sendCollision();


};

#endif // HITLISTENER_H
