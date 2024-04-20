#include <stdio.h>
//ZZHow1024写于2023年6月22日 
int main()
{
	//程序说明：90分及以上A，80~90为B，70~80为C，60~70为D，低于60分为E 
	int i;
	
	printf("请输入你的分数：\n");
	scanf("%d",&i);
	
	if (i >= 90)
	{
		printf("你的分数评级为A\n");
	}
	else if(i >=80 && i < 90) 
	{
		printf("你的分数评级为B\n");
	}
	else if(i >=70 && i < 80) 
	{
		printf("你的分数评级为C\n");
	}
	else if(i >=60 && i < 70) 
	{
		printf("你的分数评级为D\n");
	}
	else if(i>=0 && i < 60) 
	{
		printf("你的分数评级为E\n");
	}
	else
	{
		printf("你这是乱输的数字吧:(\n"); 
	}
	return 0;
 } 
