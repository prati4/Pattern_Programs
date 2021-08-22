/*
* * * * *
* * * * 
* * * 
* *
*
*/


#include<stdio.h>
int main()
{
	int num,row,col;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(row=num;row>=1;row--)
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
