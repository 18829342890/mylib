
#include <stdio.h>
#include "logrecord.h"

int main(void)
{
	LOG_ERROR("i 小于0");
	LOG_WARNNING("i 小于0");
	LOG_INFO("i 小于0");
	LOG_DEBUG("i 小于0");

	return 0;
}
