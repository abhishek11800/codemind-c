#include<stdio.h>
int main()
{
   char s[1000];
   scanf("%[^
]%*c",&s);
   printf("%s",s);
}