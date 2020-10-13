#include <stdio.h>
int main()
{char text1[100],text2[100];
int i=0;
printf("enter string");
gets(text1);
printf("enter another");
gets(text2);
while(text1[i]!='\0')
{text2[i]=text1[i];
i++;}



text2[i]='\0';
printf("%s",text2);
return 0;
}
