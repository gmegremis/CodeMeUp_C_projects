#include <stdio.h>
int main()
{
	printf("Give the words:\n");
    int words=1;
    const char end='.';
    char c = getchar();
    char previous = 0;
    while (c!=end)
    {
    	
    	if (previous==32)	/*ASCII table num*/
    	{
    		if ((c>=65&&c<=90)|| (c>=97&&c<=122))	/*ASCII table num*/
				words++;
		}
		previous=c;
        c=getchar();
    }
    printf("The total words are %d",words);
}
