 #include <stdio.h>

int main()
{
	int x,bin[7];
	scanf("%d",&x);
	if (x < 0)
	{
		printf("1");
		fflush(stdout);
		for (int i = 6; i >=0;i--)
		{
			bin[i]=x%2;
			x/=2;		
		}
		printf("\n");
	}
	else 
	{
		printf("0");
		fflush(stdout);
		for (int i =6;i>=0;i--)
		{	
			bin[i]=x%2;
			x/=2;
		}
	}
		for (int i =0 ; i <7;i++)
		{
			printf("%d",bin[i]);
			fflush(stdout);
		}
		printf("\n");
	

	return 0;

}
