#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    //if(1<=a<=1000&&1<=b<=1000&&1<=c<=1000)
    //{
    float s = (a+b+c)/2;
    printf("%.2f",sqrt(s*(s-a)*(s-b)*(s-c)));
    //}
}