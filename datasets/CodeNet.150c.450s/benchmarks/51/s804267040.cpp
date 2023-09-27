#include<cstdio>
using namespace std;
int main(){
  bool data[30]{};
  int x;
  for(int i = 0 ; i < 30 ; i++)
    data[i] = true;
  for(int i = 0 ; i < 28 ; i++){
    scanf("%d",&x);
    data[x-1] = false;
  }
  for(int i = 0 ; i < 30 ; i++){
    if(data[i])
      printf("%d\n",i+1);
  }
 }

