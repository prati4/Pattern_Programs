/*         1
         2  2 
        3 3 3
		4  4  4  4  
*/		


#include<stdio.h>
int main()
{
    int row,space,i,j,num;
    
	 printf("Enter the number");
	 scanf("%d",&num);
	 int n=num;
	 for(row=1;row<=num;row++)
	 {
	 	for(space=1;space<=n;space++)
	 	{
	 		printf(" ");
	 	}
		  n--;
		 for(i=1;i<=row;i++)
		 {
		 	printf("%d ",row);    
		 }
		 printf("\n");
	 }	
	 return 0;
}
