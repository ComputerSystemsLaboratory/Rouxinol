#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

int main(){

  int n;
  cin >> n;

  while(n!=0){
    int s[86401]={};
    for(int i=0;i<n;i++){
      string u,t;
      cin >> u >> t;
      s[stoi(u.substr(0,2))*3600+stoi(u.substr(3,2))*60+stoi(u.substr(6,2))]++;
      s[stoi(t.substr(0,2))*3600+stoi(t.substr(3,2))*60+stoi(t.substr(6,2))]--;
    }

    int m=0;
    for(int i=0;i<86400;i++){
      s[i+1]+=s[i];
      m=max(m,s[i]);
    }

    cout << m << endl;

    cin >> n;
  }

}
