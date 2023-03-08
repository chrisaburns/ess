
#include "system.h"

void print_intro_banner()
{
  std::cout << std::endl;
  std::cout << "------------------------" << std::endl;
  std::cout << "| ELECTROSTATIC SOLVER |" << std::endl;
  std::cout << "------------------------" << std::endl;
}

void print_exit_banner()
{
  std::cout << std::endl;
  std::cout << "---------------------" << std::endl;
  std::cout << "| END OF SIMULATION |" << std::endl;
  std::cout << "---------------------" << std::endl;
}

void init_domain(cDomain& oDom)
{
    std::cout << std::endl;
    std::cout << "Setting up computational domain..." << std::endl;

    oDom.iDur = I_DUR;
    oDom.iDimx = I_DIMX;
    oDom.iDx = I_DX;
    for(int i=0; i<I_GRID; i++)
    {
      oDom.fE[i] = 0.0;
      oDom.fB[i] = 0.0;
    }
}

void init_sources(cSource& oS)
{
  std::cout << "Setting up sources..." << std::endl;

  oS.fX = 0.0;
  oS.fQ = 1.0;
  oS.fI = 0.0;
  oS.fE = 0.0;
  oS.fB = 0.0;
}
