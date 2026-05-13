///week12-4.cpp
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int ans=1;
    for(int i=1;i<=a;i++){
        if(a%i==0&&b%i==0)ans=i;
    }
    printf("最大公因數是%d\n",ans);
    printf("%d/%d約分之後,變%d/%d\n",a,b,a/ans,b/ans);

}
