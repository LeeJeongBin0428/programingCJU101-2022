	#include <stdio.h>

	#define MAXSIZE 100
	#define MINSIZE 90

int main{

	int chestsize = 0;
	char chestsize;


	printf("Input your chest size :#n");
	scanf_s("%d," & chestsize);

	if (chestsize <= MINSIZE)
	{

		(size = 'S');



	}
	else if ((chestsize > MINSIZE) && (chestsize <= MAXSIZE))
	{
		(size = 'M');


	}

	else (chestsize > MAXSIZE)
	{

		(size = 'L');

	}

	printf("your size :%c", chestsize); 

	return 0;


}