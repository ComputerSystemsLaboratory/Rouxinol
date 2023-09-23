#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int st[30] = {0};
  int i;
  for(i = 0; i < 28; i++){
    int	input;
    cin	>> input;
    st[input - 1] = 1;
  }
  for(i = 0; i < 30; i++){
    if(!st[i])
      printf("%d\n",i + 1);
  }




  return 0;
}