//week05-4a.cpp SOIT106_BASE_004
#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int ans=100;
if(n>2000){
 ans+=(n-2000)/500*5;
 if((n-2000)%500>0)ans+=5;
}
printf("%d\n",ans);
}
