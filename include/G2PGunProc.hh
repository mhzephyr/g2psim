#ifndef G2P_GUNPROC_H
#define G2P_GUNPROC_H

#include "G2PProcBase.hh"

class G2PBPM;
class G2PDrift;
class G2PGunBase;

class G2PGunProc : public G2PProcBase
{
public:
    G2PGunProc();
    ~G2PGunProc();

    int Init();
    int Begin();
    int Process();
    void Clear();

protected:
    int DefineVariables(EMode mode = kDefine);

    void MakePrefix();

    double fHRSAngle;
    double fHRSMomentum;
   
    double fV5beam_lab[5];
    double fV5react_tr[5];
    double fV5react_lab[5];

    double fV5bpm_bpm[5];
    double fV5bpm_lab[5];

    double fV5tg_tr[5];

    G2PBPM* pBPM;
    G2PDrift* pDrift;
    G2PGunBase* pGun;

private:
    static G2PGunProc* pG2PGunProc;

    ClassDef(G2PGunProc, 1)
};

#endif