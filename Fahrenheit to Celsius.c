#include<stdio.h>
int main()
{
    float f;
    scanf("%f",&f);
    printf("%0.2f",(f-32)*(5.0/9));
}