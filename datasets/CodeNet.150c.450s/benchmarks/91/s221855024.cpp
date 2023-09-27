#include <iostream>
#include <vector>
#define MAX 1000000
using namespace std;

int main(){
  //bool num[MAX];
  pair<bool,int> num[MAX];
  int input=0;
  while(cin >> input){
   int count=0;
  for(int i=2; i<MAX; i++){
    num[i].first=true;
    num[i].second=i;
  }
  for(int i=2;i<input+1;i++){
    if(num[i].first){
      //cout << num[i].second <<",";
      count++;
      for(int j=i+i; j<MAX; j+=i){
        num[j].first=false;
      }
    }
  }
  cout << count << endl;
  }
}