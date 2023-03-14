// change!
#include "system.h"
#include "field_solver.h"

cDomain oDom;
cSource oS;

int main(int argc, char** argv)
{
  print_intro_banner();
  init_domain(oDom);
  init_sources(oS);

  // time loop
  for(int t = 0; t < oDom.iDur; t++)
  {
    std::cout << "Time " << t;
    std::cout << " - Solving fields on the grid." << std::endl;
    solve_fields(oDom, oS);

    for(int x = 0; x < I_GRID; x++)
    {
      std::cout << oDom.fE[x] << std::endl;
    }
  }

  print_exit_banner();

return 0;
}
