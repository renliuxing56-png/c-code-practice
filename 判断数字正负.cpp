#include <stdio.h>
int main(void)
{ double num;
  printf("请输入一个数字：");
  scanf("%lf",&num);
  if(num>0){
  	printf("这是正数\n");
  } 
    else if(num<0){
    printf("这是一个负数\n");	
	}
	else{
		printf("这是0\n");
	
	}
	return 0;
 } 
