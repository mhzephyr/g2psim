#ifndef G2P_TRANS400016_H
#define G2P_TRANS400016_H

#include "../G2PTrans.hh"

class G2PTrans400016 : public G2PTrans
{
public:
    G2PTrans400016();
    ~G2PTrans400016();
    
    bool TransLeftHRS(double* vector_jjl);
    bool TransRightHRS(double* vector_jjl);
    void ReconLeftHRS(double* vector_jjl);
    void ReconRightHRS(double* vector_jjl);
};

#endif