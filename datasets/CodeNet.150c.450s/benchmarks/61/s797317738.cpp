#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a,b,c;
int x;
vector<int> y;

bool input(){
  int n;
  cin>>n>>a>>b>>c>>x;
  if(n==0&&a==0&&b==0&&c==0&&x==0)return false;
  y.clear();
  for(int i=0;i<n;i++){
    int tmp;cin>>tmp;
    y.push_back(tmp);
  }
  return true;
}

int mmm(int X){
  return (a*X+b)%c;
}

bool cc(vector<int> y){
  for(int i=0;i<y.size();i++){
    if(y[i]==0)return 0;
  }
  return 1;
}


int solve(){
  vector<int> check(y.size());
  int t = 0;
  for(int i=0;i<=10000;i++){
    if(y[t] == x){
      t++;
    }
    x = mmm(x);
    if(t == y.size())return i;
  }
  return -1;
}

int main(){
  while(input()){
    cout<<solve()<<endl;
  }
}