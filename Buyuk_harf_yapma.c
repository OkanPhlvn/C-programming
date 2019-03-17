#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Büyük harfe çevirme */
	
    char s[] = "Okan";
    int i=0;
    int offset = 'a' - 'A';
    
    while(s[i] != '\0')
    {
    	if(s[i] >= 'a')
    	{
    		s[i] = s[i] - offset;
		}
		i++;
	}
    printf(">- %s\n",s);
    
    
    return 0;
}
