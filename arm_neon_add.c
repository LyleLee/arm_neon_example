#include <stdio.h>
#include "arm_neon.h"

void pr(uint8_t *p, int n)
{
	int i;
	printf("data: ");
	for(i = 0; i < n; i++)
	{
		printf("%02d ", p[i]);
	}
	printf("\n");
}

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
	//uint8_t origin[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
	//uint8_t final[16] = {0};

	uint8x16_t three = vmovq_n_u8(3);
	
	//print_uint8x16(&three, 16);
	//uint8x16_t data = vld1q_u8(origin);
	//uint8x16_t result = vaddq_u8(data, three);
	//vst1q_u8(final, result);

	//pr(final, 16);

}
