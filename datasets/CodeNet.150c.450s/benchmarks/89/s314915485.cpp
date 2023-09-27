#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<algorithm>
#include<string>
#include<cstring>
#include<queue>
#include<cctype>
using namespace std;
#define fr first
#define sc second
typedef pair<int,int> Pt;
typedef pair<Pt ,int> P;
#define MAX 1000001
bool SOSU[MAX]={true,true};
int main(){
  for(int i=2;i<MAX;i++){
    if(!SOSU[i]){
      for(int j=i+i;j<MAX;j+=i){
        SOSU[j] = true;
      }
    }
  }
  int a,b,n;
  while(cin >> a >> b >> n && a){
    int cnt = 0,i = a;
    for(;i<MAX;i+=b){
      if(!SOSU[i]) cnt++;
      if(cnt == n) break;
    }
    cout << i << endl;
  }
}