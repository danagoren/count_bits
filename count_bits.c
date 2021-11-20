# include <stdio.h>

int count_bits(long int); /*function declaration*/

/*the function main scans a decimal number from the user, and then prints it and the number of set bits in its binary representation*/
int main()
{
	long int num;
	printf("\nPlease insert a number\n");
	scanf("%ld", &num);
	printf("\nThe number %ld has %d bits set in its binary representation\n", num, count_bits(num));
	return 0;
}/*end of main*/

/*the function count_bits counts how many bits are set in the binary representation of a received number that is given in a decimal representation, then returns the count*/
int count_bits(long int x)
{
	int count = 0;
	while (!(x == 0)) /*while the number has a least one bit set*/
	{
		count++;
		x = (x&(x-1)); /*zero-ing the first set bit from the right*/
	}/*end of while*/
	return count;
}/*end of count_bits*/
