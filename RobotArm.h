#include <GL/glut.h>
#include <iostream>

#include "Utils.h"

#ifndef ROBOTARM_H
#define ROBOTARM_H

class RobotArm
{
public:
    RobotArm();
    ~RobotArm();
    void draw();
    void drawRobotBase();
    void drawRobotStand();
    void drawRobotShortArm();
    void drawRobotLongArm();
    void drawRobotHand();
    void drawDirection();
    void printAttributes();
    void checkMinValueAngle();
    void checkMaxValueAngle();
    void update();
    void test();
    
    void rotateAngle(TypeAngle angle, float rotate);
    void changeHandDistanceVertical(float distance);
    void changeHandDistanceHorizontal(float distance);
    void changeStatusShowDirection();

    Vector getVector(TypeVector v);
    float getAngle(TypeAngle a);

private:
    //special
    bool showDirection = false;
    //base
    float baseLeg_Radius = 4;
    float baseLeg_Height = 0.2;
    float baseBody_Radius = 2;
    float baseBody_Height = 0.75;
    float baseHead_Radius = 1.4;
    float baseHead_Height = 0.45;
    float axisRadius = 0.3;
    float axisHeight = 2;
    //stand
    float standPositionZ = 1.8;
    float standAxisDistance = 1.1;
    float standDistance = 0.75;
    float standWidth = 0.8;
    float standLength = 0.15;
    float standHeight = 3;
    float angleX = 60.0;
    float angleZ = 55.0;
    //short arm
    float angleShortArm = 100.0;
    float shortArmDistance = 0.5;
    float shortArmWidth = 0.8;
    float shortArmLength = 0.15;
    float shortArmHeight = 4;
    float axisShortArmRadius = 0.3;
    float axisShortArmHeight = 2;
    //longArm
    float angleLongArm = 25.0;
    float longArmDistance = 0.5;
    float longArmWidth = 0.8;
    float longArmLength = 0.15;
    float longArmHeight = 8;
    float wristDistance = 7.5;
    float wristRadius = 0.7;
    float wristHeight = 1.2;
    //hand
    float handRadius = 1;
    float handHeight = 0.5;
    float handThickness = 0.5;
    float handDistanceVertical = 1.5;
    float handDistanceHorizontal = -0.5;
    float leftHandAngleStart = 90;
    float leftHandAngleEnd = 270;
    float rightHandAngleStart = 270;
    float rightHandAngleEnd = 450;

    Color baseLeg_Color = GRAY_LIGHT;
    Color baseLeg_OutlineColor = GREEN;
    Color baseBody_Color = GRAY_LIGHT;
    Color baseBody_OutlineColor = GREEN;
    Color baseHead_Color = GRAY_LIGHT;
    Color baseHead_OutlineColor = GREEN;

    Vector normalBase; // (0,0,1)
    Vector robotDirectionXY_Vertical;// lam goc cho tat ca vector khac;
    Vector robotDirectionXY_Horizontal;
    Vector robotDirectionXYZ;
    Vector shortArmDirection;
    Vector longArmDirection;
    Vector handDirection;
    Vector handMove;

    Point centerBaseLeg;
    Point centerBaseBody;
    Point centerBaseHead;
    Point leftStand;
    Point rightStand;
    Point axisStand;
    Point leftShortArm;
    Point rightShortArm;
    Point axisShortArm;
    Point leftLongArm;
    Point rightLongArm;
    Point wrist;
    Point leftHand;
    Point rightHand;
};

#endif
