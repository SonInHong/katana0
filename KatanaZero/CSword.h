#pragma once
#include "CObject.h"
#include "CTexture.h"
#include "CPlayer.h"
#include "define.h"
#include "CHitEffect.h"

class CSword :
    public CObject
{
public:
    CSword();
    ~CSword();

    virtual void Initialize();
    virtual void Update();
    virtual void Render(HDC _dc);

    virtual bool Collide(CObject* other);
    virtual bool Colliding(CObject* other);
    void SetAngle(double a) { Angle = a; }

 

    void SetValid(bool b) { Valid = b; }
    bool& GetValid() { return Valid; }

private:
    CTexture* Texture;
    CObject* Owner;
    float Speed;
    doublepoint OffSet;
    int Direction;
    bool Valid;

    double Angle;
    double Timer;
    double Length;

    CHitEffect* hiteffect;

    friend CPlayer;
};

