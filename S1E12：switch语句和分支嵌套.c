#include <stdio.h>
//DNX写于 2023年6月22日 
//程序说明：90分及以上A，80~90为B，70~80为C，60~70为D，低于60分为E。此程序是反过来的 。
//本程序经过鱼C论坛 isdkz 大佬指点后修改成。
int main()
{
	char name[100];
	char grade;
	char answer, isHandsome;
	int i;
	
	printf("请输入你的名字：\n");
	scanf("%s", name);
	getchar();
	
	printf("请输入你的评级：\n");
	scanf("%c", &grade);
	
	printf("%s同学，", name);
	switch (grade)
	{
		case 'A': printf("你的成绩在90分及以上！\n");i = 1;break;
		case 'B': printf("你的成绩在[80,90)\n");i = 1;break;
		case 'C': printf("你的成绩在[70,80)\n");i = 1;break;
		case 'D': printf("你的成绩在[60,70)\n");i = 0;break;	
		case 'E': printf("你的成绩在[0,60)\n");i = 0;break;
		default : printf("你输入的是%c，你这是乱输的吧:(\n",grade);break;
	}
	//接下来是一个分支嵌套结构
	if(i==1)
	{
		printf("%s同学，你的成绩这么好，能否采访你一下？('y'/'n')",name);
	}
	else
	{
		printf("%s同学，你的成绩这么差，能否采访你一下？('y'/'n')",name);
	}
	
	getchar();
	scanf("%c",&answer);
	
	if(answer == 'Y' || answer == 'y')
	{
		getchar();
		printf("很好，请问你是不是帅哥？(y/n)");
		scanf("%c",&isHandsome);
		
		if(isHandsome =='Y' || isHandsome == 'y')
		{
			printf("好的，%s同学成绩好的原因是：他是帅哥。",name);	
		}
		else
		{
			printf("好的，%s同学成绩好的原因是：他不是帅哥。",name);
		} 
	}
	else
	{
		printf("那就算了;)");
	}
	
	return 0;
}
