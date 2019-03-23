#include <stdio.h>

int main()
{
	float x = 0;
	float y = 0;
	printf("Give me two numbers\n");
	scanf("%f%f",&x,&y);
	printf("%f + %f = %f\n",x,y,x+y);
	printf("%f - %f = %f\n",x,y,x-y);
	printf("%f * %f = %f\n",x,y,x*y);
	printf("%f / %f = %f\n",x,y,x/y);
	
	return 0;
	
}
