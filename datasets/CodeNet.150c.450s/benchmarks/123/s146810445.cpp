#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

vector<int> pri;
int isprime(int x){
  for(int i=0;i<pri.size();i++){
    if(x == pri[i])return 1;
    if(!(x % pri[i]))return 0;
  }
  return 1;
} 

void primecal(int x){
  bool ip;

  for(int i=2;i<=floor(sqrt(x));i++){
    ip = true;
    for(int j=0;j<pri.size();j++){
      if(!i%pri[j]){
	ip = false;
	break;
      }
    }
    if(ip)pri.push_back(i);
  }
}

int  main(){
  
    cin.tie(0);
    ios::sync_with_stdio(false);
  int mx,N,tmp;
  vector<int> a;
  cin >> N;
  mx = 0;
  for(int i=0;i<N;i++){
    cin >> tmp;
    a.push_back(tmp);
    mx = max(mx,tmp);
  }
  primecal(mx);
  int c=0;
  for(int i=0;i<N;i++)
    c += isprime(a[i]);

  cout << c << endl;
  
  return 0;
}