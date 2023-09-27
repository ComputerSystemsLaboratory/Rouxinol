#include<bits/stdc++.h>
using namespace std;

map<char,char> ma;

int main(){
  ios_base::sync_with_stdio(false);
  int n,m;
  char a,b;
  while(1){
    cin >> n;
    if(n==0) break;
    for(int i=0;i<n;i++){
      cin >> a >> b;
      ma[a]=b;
    }
    cin >> m;
    char temp;
    for(int i=0;i<m;i++){
      cin >> temp;
      if(ma[temp]!=0){
	cout << ma[temp];
      }else{
	cout << temp;
      }
    }    
    cout << endl;
    ma.clear();
  }

  return 0;
}