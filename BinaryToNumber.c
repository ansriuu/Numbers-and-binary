#include <stdio.h>
#include <stdlib.h>

int changer(int x)
{
	// this function can be replaced by strtol() function present in stdlib , standard libarary
	// as shown in main function
	// i created for the sack of process implementation 


	int num = 0;
	int curr,i = 0;
	num = num + (x%10)*1;
	x /= 10;

	while (i <=5)
	{
		curr = x%10;
		num = num + curr*(2<<i);
		i++;
		x /= 10;
	}
	return num;
	
}


int main()
{
	unsigned int x; // our binary number
	int num;
	printf("8 bit binary number : ");
	fflush(stdout);
	scanf("%u",&x);


	if (x/10000000) // checking the first digit to confirm negative or positive
		num = changer(x) - 128;
	else 
		num = changer(x);
	printf("number is : %d\n",num);

/* 
        this is the implementation using stdlib 

        char strbin[9]; //our binary number in string
	char *start = strbin, *endptr;

	sprintf(strbin,"%u",x);
	
	if (x/10000000) 
		num = strtol(start+1,&endptr,2) - 128;
	else 
		num = strtol(start,&endptr,2);
	printf("%d\n",num);
*/

	return 0;
}
