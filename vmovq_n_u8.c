#include <stdio.h>
#include "arm_neon.h"

void print_uint8x16(uint8x16_t *a, int n)
{
	uint8_t *p = (uint8_t *)a;
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%02d ", *(p+1));
	} 
	printf("\n");
}

int main()
{

	uint8x16_t three = vmovq_n_u8(3);
	
	print_uint8x16(&three, 16);
}
