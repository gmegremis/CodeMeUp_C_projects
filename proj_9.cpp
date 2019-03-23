#include<stdio.h>

int main ()
{
	int i = 0;
	int myArray[10];
	double sum = 0; 
	for (i=0; i<10; i++)
	 {
	 	printf("Give the numbers\n");
	 	scanf("%d", &myArray[i]);
	 	sum=sum+myArray[i];	//sum+=myArray[i];
	 }
	 printf("***The average is ");
	 for (i=9; i>=0; i--)		/*We say i=9 because myArray[10] includes 9 characters.h */
	 {
	 	printf("The numbers are %d", myArray[i]);
	 }
}
/*This program creates an array and takes 10 nums from the user. Then it returns the numbers in the opposite order*/
