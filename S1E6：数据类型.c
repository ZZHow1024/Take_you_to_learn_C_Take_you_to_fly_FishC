#include <stdio.h>
//ZZHow1024写于2023年6月20日 
#define j "DNX"
int main()
{
	long long int i;
	float k;
	
	i = 312;
	k = 1.123456789;
 
	printf("size of int is %d\n",sizeof(int));
	printf("size of char is %d\n",sizeof(char));
	printf("size of flout is %d\n",sizeof(float));
 	printf("size of %i is %d\n",i,sizeof(i));
	printf("size of %s is %d\n",j,sizeof(j));
	printf("size of %f is %d\n",k,sizeof(k));
 
 } 
