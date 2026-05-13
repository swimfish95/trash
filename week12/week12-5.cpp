///week 12-5.cpp
#include <stdio.h>
int gcd(int a,int b)
{
    if(a==0) return b;
    if (b==0) return a;
    return gcd(b,a%b);
}
 int main()
 {
     printf("please input two numbers:");
     int a,b;
     scanf("%d%d",&a,&b);

     printf("ans:%d\n",gcd(a,b));

 }
