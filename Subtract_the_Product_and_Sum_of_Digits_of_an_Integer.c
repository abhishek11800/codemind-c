#include<stdio.h>
int main()
{
    int i,n,a,s=0,p=1;
    scanf("%d",&n);
    for(i=n;i>0;i/=10)
    {
        a=i%10;
        p*=a;
        s+=a;
    }
    printf("%d",p-s);

}