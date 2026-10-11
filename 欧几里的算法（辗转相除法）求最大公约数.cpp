#include <stdio.h>
int main()
{ 
int t;
int a,b;
scanf ("%d %d",&a,&b);
while (b!=0){
	t=a%b;
	a=b;
	b=t;
	}
	printf("gcd=%d\n",a);
	return 0; 
} 
