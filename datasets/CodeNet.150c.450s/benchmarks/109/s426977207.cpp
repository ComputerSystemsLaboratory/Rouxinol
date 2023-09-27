#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;
const int MAX = 100000;
typedef pair<int,int> P;
int ans[MAX];

int ToS(int h, int m, int s){
  return h*60*60+m*60+s;
}

void init(){
  fill(ans,ans+MAX,0);
}

int main(){
  int n;
  while(cin >> n && n){
    init();
    for(int i = 0; i < n; i++){
      int hh,ss,mm;
      int hh2,ss2,mm2;
      scanf("%d:%d:%d",&hh,&mm,&ss);
      scanf("%d:%d:%d",&hh2,&mm2,&ss2);
      int from = ToS(hh,mm,ss);
      int to = ToS(hh2,mm2,ss2);
      for(int i = from; i < to; i++)
	ans[i]++;
    }
    
    int out = 0;
    for(int i = 0; i < MAX; i++)
      out = max(out,ans[i]);

    cout << out << endl;

  }
  return 0;
}