#include <stdio.h>
#include<string.h>

int main()

{
 char StringOrLetter[20];
 int i=0;
 printf("Vuvedi duma:\n");
 scanf("%s",StringOrLetter);
 printf("\nVuvedenoto e:%s",StringOrLetter);
 for(i=0;i<=strlen(StringOrLetter);i++)
{
 if(StringOrLetter[i]>=97&&StringOrLetter[i]<=122)
 StringOrLetter[i]=StringOrLetter[i]-32;
}
 printf("\nPoluchava se:%s\n",StringOrLetter);
 return 0;
}
      
