#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r;
    int sum=0;
    int temp=n;
    lable:
        sum=0;
	    while(temp>0)
        {
            r=temp%10;
            sum+=r;
            temp/=10;
        }
        temp=sum;
        sum=0;
    if(temp>9)
    {
		goto lable;
	}
	else
	{
		printf("%d",temp);
	}    
}

