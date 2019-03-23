#include <stdio.h>
/*this program changes farenaight degrees to celsious degrees */
/*Αν θέλουμε νας κάνουμε την πράξη στο όρισμα της μεταβλητής, την ορίζουμε ακριβώς μετά το scanf*/
/*Πάντα ορίζουμε μια τιμή στις μεταβλητές*/

int main ()
{
	float x = 0;	
	printf("Give me a temperature\n");
	scanf("%f",&x);
	float change = x*9/5 + 32; /*this is the type that turns Fareneight degrees into Celcious degrees*/
	printf("%f degrees Celsious is %f degrees Fareneight",x,change);
	return 0;	
} 
