#include <stdio.h>
/*this program changes farenaight degrees to celsious degrees */
/*�� ������� ��� ������� ��� ����� ��� ������ ��� ����������, ��� �������� ������� ���� �� scanf*/
/*����� �������� ��� ���� ���� ����������*/

int main ()
{
	float x = 0;	
	printf("Give me a temperature\n");
	scanf("%f",&x);
	float change = x*9/5 + 32; /*this is the type that turns Fareneight degrees into Celcious degrees*/
	printf("%f degrees Celsious is %f degrees Fareneight",x,change);
	return 0;	
} 
