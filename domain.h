
#ifndef DOMAIN_H
#define DOMAIN_H

#define I_DUR   1
#define I_DIMX  10
#define I_DX     1
#define I_GRID   I_DIMX/I_DX

class cDomain{
  public:
    int iDur;
    int iDimx;
    int iDx;
    float fE[I_GRID];
    float fB[I_GRID];
};

#endif
