#include<stdio.h>
main()
{
	
	
	int no;
	mehul:
	printf("\n Enter number=>");
	scanf("%d",&no);
	
	
	if(no>0)
	{
		
		
		printf("\nsqure= %d ",no*no);
	
	}
	else
	{
		
		
		
		printf("oyy bhidu possitive only");
		goto mehul;
		
	}
}
