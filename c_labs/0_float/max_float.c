#include <stdio.h>

int main(void)
{
	float max = 0;

	for(;;){
		max+=100;
		printf("max = %.2f\n", max);
	}

	return 0;
}
