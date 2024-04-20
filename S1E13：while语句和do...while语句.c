#include <stdio.h> 
//ZZHow1024写于 2023年6月22日 

int main()
{
	//1、用while语句实现计算 1+2+3+...+100 的结果
	printf("程序1：用while语句实现计算 1+2+3+...+100 的结果\n");
	
	int i = 1,sum = 0;
	
	while (i <= 100)
	{
		sum = sum + i;
		i = i + 1;
	}
	printf("结果是%d\n\n",sum);
	
	
	//2、用do...while语句实现计算 1+2+3+...+100 的结果
	printf("程序2：用do...while语句实现计算 1+2+3+...+100 的结果\n");
	
	int ii = 1,sum1 = 0;
	
	do
	{
		sum1 = sum1 + ii;
		ii = ii + 1;
	}
	while(ii <= 100);
	printf("结果是%i\n\n",sum1);
	
	
	//3、统计从键盘输入的一行英文句子的字符个数 
	printf("程序3：统计从键盘输入的一行英文句子的字符个数\n");
	
	int count = 0;
	
	printf("请开始输入字符(结束请按Enter)："); 
	while(getchar() != '\n')
	{
		count = count + 1;
	} 
	
	printf("你总共输入了%d个字符！\n",count);
	
	
	return 0;
}
