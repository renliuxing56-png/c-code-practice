#include <stdio.h>
int main(void)
{
	int score;
	printf("请输入一个分数：");
	scanf("%d",&score) ;
	if(score>100){
		printf("分数无效\n");
	}
	else if(score<0){
		printf("分数无效\n");
	}
	else if(score>=90){
		printf("A\n");
	}
	else if(score>=80){
		printf("B\n");
	}
	else if(score>=70){
		printf("C\n");
	}
	else if(score>=60){
		printf("D\n");
	}
	else
	printf("E\n");
	return 0;
}
