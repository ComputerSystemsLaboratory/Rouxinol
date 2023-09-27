#include<cstdio>
using namespace std;

int main()
{
  int a,b,ab;

  while(scanf("%d%d",&a,&b)!=EOF){
    ab=a+b;
    int count=0;
    while(1){
      ab/=10;
      if(ab==0)break;
      count++;
    }
    printf("%d\n",count+1);
  }
  return 0;
}