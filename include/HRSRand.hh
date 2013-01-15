// This file defined a class HRSRand.
// It is the rand of the whole simulation package.
// It use TRandom2 as Uniform random number generator. TRandom2 is fastest.
// All member functions are virtual so they can be overwrite.
//
// History:
// By C. Gu, Jan 12, 2013, First public version.
//

#ifndef HRS_RAND_H
#define HRS_RAND_H

#include "TROOT.h"
#include "TRandom2.h"

typedef double (*func)(double);

class HRSRand
{
public:
    HRSRand();
    ~HRSRand();
    
    virtual double Uniform();
    virtual double Uniform(double low, double high);
    virtual double Gaus(double mean, double sigma);
    virtual double Linear(double a, double c, double low, double high);
    virtual double Func(func f, double low, double high, double ylow, double yhigh);

private:
    TRandom2 *pRG;
};

#endif