#include<iostream>

using namespace std;

int list[101];

int main(){
  int n, i, max=0;
  while(cin >> n){
    list[n]+=1;
  }
  for(i=1; i<101; i++){
    if(list[i] >= max)max=list[i];
  }
  for(i=1; i<101; i++){
    if(list[i] == max)cout << i << endl;
  }
}