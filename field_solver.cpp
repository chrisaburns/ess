
#include "field_solver.h"

void solve_fields(cDomain& oDom, cSource& oS)
{
  solve_E(oDom, oS);
}

void solve_E(cDomain& oDom, cSource& oS)
{
  for(int x = 0; x < I_GRID; x++)
  {
    oDom.fE[x] = oS.fX - (float) x;
  }
}
