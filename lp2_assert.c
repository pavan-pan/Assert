#include "lp2_assert.h"
#include "stdio.h"
#include "nrf_log.h"

void aFailed(int file, int line, int error_code)
{
    NRF_LOG_ERROR ("error in file %d, in line %d, error code is %x \n", file, line, error_code);
		LP2_BREAKPOINT;
}
