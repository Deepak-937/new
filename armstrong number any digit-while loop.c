#include<stdio.h>
#include<math.h>
int main(){
int n,r,sum=0,temp,m,i=0;
printf("enter the number : ");
scanf("%d",&n);
temp=n;
m=n;
while(m>0)
{
    r=m%10;
    i++;
    m=m/10;
}
while(n>0)
{
    r=n%10;
    sum=sum+(pow(r,i));
    n=n/10;
}
printf("Answer is = %d\n",sum);
if(temp==sum)
    printf("It is a armstrong number");
else
    printf("it is not a armstrong number");

    return 0;
}

