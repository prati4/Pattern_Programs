  /*
        1
       2  3  
      4  5  6 
     7  8  9  10 
*/

#include<stdio.h>
int main()
{
    int row,space,i,value=1,num;
    
	 printf("Enter the number ");
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
		 	printf("%d ",value);
		 	value++;
		 }
		 printf("\n");
	 }	
	 return 0;
}
