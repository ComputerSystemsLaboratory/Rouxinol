#include<iostream>
#include<cstdio>

using namespace std;
int main(int argc, char *argv[])
{

  int A;
  double inte;
  unsigned int S;//面積
  while(scanf("%d",&A)!=EOF){
    inte = A;
    S = 0;
    for(int i =inte;i <= 600-A; i+=inte){
      S += (i)*(i)*inte;
    }
    cout <<S<<endl;
  }

  return 0;
}