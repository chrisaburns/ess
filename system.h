
#ifndef SYSTEM_H
#define SYSTEM_H

#include <iostream>
#include "domain.h"
#include "source.h"

// banners
void print_intro_banner(void);
void print_exit_banner(void);

// system initialization (pass objects by reference)
void init_domain(cDomain& oDom);
void init_sources(cSource& oS);

#endif
