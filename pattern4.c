/*        *
        *   *
       *  *  *
		*  *  *  * 
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
		 	printf("* ");    
		 }
		 printf("\n");
	 }	
	 return 0;
}
	 
