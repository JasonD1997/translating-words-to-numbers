#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	char s1[100];
	char s2[100];
	int i;
	scanf("%s",s1);
	for(i=0;i<strlen(s1);i++)
	{
	    switch(s1[i])
	    {
	        case 'o':strcat(s2,"1");
	                 i=i+2;
	                 break;
	        case 't':if(s1[i+1]=='w')
	        {strcat(s2,"2");
	                  i=i+2;
	        }
	        else
	        {
	           strcat(s2,"3");
	                  i=i+4; 
	        }
	                 break;  
	        case 'f':if(s1[i+1]=='o')
	                  {strcat(s2,"4");
	                 i=i+3;}
	                 else{
	                     strcat(s2,"5");
	                     i=i+3;
	                 }
	                 break;
	         case 's':if(s1[i+1]=="i")
	         {strcat(s2,"6");
	         i=i+2;}
	         else{
	                     strcat(s2,"7");
	                     i=i+4;
	                 }
	         
	                 break;
	          case 'e':strcat(s2,"8");
	                  i=i+4;
	                 break;
	         case 'n':strcat(s2,"9");
	                  i=i+3;
	                 break;
	          
	    }
	}
	printf("%s\n",s2);
	return 0;
}

