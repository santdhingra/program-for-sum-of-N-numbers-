#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,sum=0;
	
		for(i=0;i<10;i++)
	{
		printf("enter a value or a[%d]",i);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("Sum is %d",sum);	
}
