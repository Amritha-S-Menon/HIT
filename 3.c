#include<stdlib.h>
#include<stdio.h> //added 
int main()
{
	int a[100],ap,min,max;  //added the number of stack
	printf("enter the number of elements in array:"); //scanf to printf
	scanf("%d",&ap); //printf to scanf
	int k=0;//removed !
	for(int i=0;i<ap;i++) //changed the symbol 
	{
		scanf("%d",&a[i]);  //changed format specifier
 	}
	for(int i=0;i<ap;i++)  //changed the symbol
                printf("%d\n",a[i]);  //changed format specifier
	min=a[0];
	max=a[0];  //added
	for(int i=0;i<ap;i++)
	{
		if(a[i]<=max)
			max=a[i];
		if(a[i]>=min)
			min=a[i];
	}
	printf("Min=%d and Max=%d",max,min); //changed format specifier
	return 0;
}
