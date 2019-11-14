#include <stdio.h>
#include "arm_neon.h"

void print_uint8x16(uint8x16_t *a, int n)
{
	uint8_t *p = (uint8_t *)a;
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%02d ", *(p+i));
	} 
	printf("\n");
}

int main()
{
	uint8_t data[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    uint8x16_t A = vld1q_u8(data);        //copy data to matrix A
    uint8x16_t B = vmovq_n_u8(3);           //prepare matrix B, every element with 3 
    uint8x16_t C = vaddq_u8(A, B);   //C = A ⊕ B
		
    print_uint8x16(&A, 16);
    print_uint8x16(&B, 16);
	print_uint8x16(&C, 16);
}
