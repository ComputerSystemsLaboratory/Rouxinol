#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;

int date[101]={0};
int memo[101]={0};
int i=0;
int main(){
  int n,mc=1;
  //入力フェイズ
  while(cin >> n){
    date[n]=date[n]+1;
   // memo[i]=n;
   // i++;
    mc=max(mc,date[n]);
   // cout <<"最大値:" <<mc << endl;
   // cout << date[n] << endl;
   // cout << mc << endl;
    }
  //sort(date.begin(),date.end());
  for(int j=0;j<=100;j++){
    if(mc==date[j]){
      cout << j << endl;
    }
  }
}