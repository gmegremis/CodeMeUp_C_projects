#include<stdio.h>

int max (int x, int y);
int main()
{
	int x=0, y=0, i = 0;
	do
	{
	printf("Give two integers:\t");
	scanf("%d %d", &x, &y);
	i = max(x ,y);
	printf("%d\n", i);
}while(x!=y);

}
int max (int x, int y)
{
		if (x>y)
		{
			return x;
		}
		else
		{
			return y;
		}
}

