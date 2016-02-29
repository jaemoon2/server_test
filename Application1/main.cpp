#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("hello world\n");

	int i = 1;
	int *pi = &i;

	printf(" %d \n", pi);
	printf(" %d \n", pi+0);
	printf(" %d \n", pi+1);
	printf(" %d \n", pi+2);
	printf(" %d \n", *(pi+1));


	printf(" %d \n", pi[1]);
	

	system("pause");
	//return 0;
}