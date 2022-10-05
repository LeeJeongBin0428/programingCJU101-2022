#include <stdio.h>
#define MaxNum 100

int main()
{
	int num, i;

	for (num = 2; num < MaxNum; num++)
	{
		for (i = 2; i < MaxNum; i++)
		{
			if (num % i == 0) break;
		}
		if (num == i) printf("%d", num);



	}
	printf("%#n");
		return 0;

}
