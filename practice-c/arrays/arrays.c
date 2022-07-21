#include <stdio.h>
/**
 * initializing an array in C
 */
int main(void)
{
	/**double balance[5] = {100.0, 2.0, 3.4, 7.7 57.3};*/

	int n[10];
	int i, j;

	for (i = 0; i < 10; i++) {
		n[i] = i + 100;
	}

	/** output each element in the array */
	for (j = 0; j < 10; j++)
	{
		printf("Element[%d] = %d\n", j, n[j]);
	}

	return (0);
}
