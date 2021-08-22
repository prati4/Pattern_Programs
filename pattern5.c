/*
1234
123
12
1	
*/		 
		



#include<stdio.h>
int main()
{
    int row,space,i,j,num;
    
	 printf("Enter the number");
	 scanf("%d",&num);
	 int n=num;
	 for(row=num;row>=1;row--)
	 {
	 	for(space=n;space>=row;space--)
	 	{
	 		printf(" ");
	 	}
	 	 n--;
		 for(i=1;i<=row;i++)
		 {
		 	printf("%d ",i);    
		 }
		 printf("\n");
	 }	
	 return 0;
}
	 
