
#ifndef FIELD_SOLVER_H
#define FIELD_SOLVER_H

#include "domain.h"
#include "source.h"

void solve_fields(cDomain& oDom, cSource& oS);
void solve_E(cDomain& oDom, cSource& oS);

#endif
