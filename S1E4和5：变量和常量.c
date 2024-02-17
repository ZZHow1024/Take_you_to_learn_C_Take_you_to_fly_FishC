#include <stdio.h>
//DNX写于2023年6月20日 

#define NAME "鱼C工作室" //这是一个常量。 

int main()
{
	int a;
	char b;
	float c;
	double d;
	
	a = 520;
	b = 'F';
	c = 3.14;
	d = 3.1415926;
	
	printf("%s创办于2010年的%d\n",NAME,a);
	printf("I love %cishC.com!\n",b);
	printf("远周率是：%.2f\n",c);
	printf("精确到小数点后9位的圆周率是：%11.9f\n",d);
	
	return 0;
}
