#include <stdio.h>
#include <stdbool.h>

void changer(int n)
{
	bool bits[8] = {0}; // this will contain the digits of the binary number
			    // in the little endian order i.e. right to left
	int hn = -128; 
	if (n<0)
	{
		bits[7] = 1;
		printf("%d",bits[7]);
		for (int i = 6; i >=0;i--)
		{
			((hn + (2<<(i-1))) >  n) ? (bits[i] = 0) : ((bits[i]) = 1) ;
		 	if ( i == 0)
				((hn + 1) >  n) ? (bits[i] = 0) : ((bits[i]) = 1) ;
			if (bits[i] ==1)
				hn += (2<<(i-1));
			printf("%d",bits[i]);
			fflush(stdout);
		}

		printf("\n");
	}
	else 
	{
		bits[7] = 0;
		printf("%d",bits[7]);
		for (int i = 6; i >=0;i--)
			{
			
				(n>= (2<<(i-1))) ? (bits[i] = 1):( (bits[i]) = 0);
				if (i ==0 )
					(n>= 1) ? (bits[i] = 1):( (bits[i]) = 0);
			 	if (bits[i]==1)
					 n-=(2<<(i-1));
				 printf("%d",bits[i]);
	        		fflush(stdout);
			}
			printf("\n");
	}
}
int main()
{
	int x;  // inteteger type is suffecient for 8 bit numbers wuth regards to two's complement
		// as their range of values is -128 to 127 
		// for larger values you may consider longer types
	scanf("%d",&x);
	changer(x);
	return 0;

}
