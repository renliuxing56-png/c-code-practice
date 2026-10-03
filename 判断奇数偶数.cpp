#include <stdio.h>
int main(void)
{
	int num;
	printf("请输入一个整数:");
	scanf("%d",&num);
	if(num%2==0){
		printf("这是偶数\n");
		}
	else{
		printf("这是奇数\n");
	}	
	return 0;
}
