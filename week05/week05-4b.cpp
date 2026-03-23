//week05-4b.cpp SOIT107_Base_002
#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int ans=100;
if(n>1500){
 ans+=(n-1500)/250*5;
 if((n-2000)%500>0)ans+=5;
}
printf("%d",ans);
}
