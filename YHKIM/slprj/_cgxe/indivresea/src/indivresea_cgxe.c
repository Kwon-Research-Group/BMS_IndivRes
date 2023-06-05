/* Include files */

#include "indivresea_cgxe.h"
#include "m_k6NS1mucL8Ffu7ESGQ30bG.h"

unsigned int cgxe_indivresea_method_dispatcher(SimStruct* S, int_T method, void*
  data)
{
  if (ssGetChecksum0(S) == 3066547818 &&
      ssGetChecksum1(S) == 1703984271 &&
      ssGetChecksum2(S) == 3538664617 &&
      ssGetChecksum3(S) == 497406251) {
    method_dispatcher_k6NS1mucL8Ffu7ESGQ30bG(S, method, data);
    return 1;
  }

  return 0;
}
