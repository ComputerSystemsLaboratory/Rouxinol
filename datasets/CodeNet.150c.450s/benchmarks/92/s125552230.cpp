#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
  int a,b;
  char ans[16];
  while(scanf("%d %d",&a,&b) != EOF){
    if(a == 0 && b == 0)break;
    sprintf(ans,"%d",a+b);
    int len = strlen(ans);
    cout << len << endl;
  }
}