/* fmaxmagl is not subject to complex aliasing rules.  It was added in
   glibc 2.25.  */
#define declare_mgen_alias(from, to) weak_alias (M_SUF (from), M_SUF (to))
#include <math-type-macros-ldouble.h>
#include <s_fmaxmag_template.c>
