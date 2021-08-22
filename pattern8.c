/*
*                    1
* *                  2 2
* * *                3 3 3
* * * *              4  4 4 4

*/

#include<stdio.h>
int main()
{
	int num,row,col;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(row=1;row<=num;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("* ");
		//	printf("%d",row);
		}
		printf("\n");
	}
	return 0;
}

