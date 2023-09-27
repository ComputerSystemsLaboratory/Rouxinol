#include<iostream>
#include<map>
#include<string>
#include<cstdio>
using namespace std;

int main(){

  long int n;
  string x,y,z;
  while(cin >> n, n){

    long int m;
    map < string,string > a;

    for(int i=0;i<n;i++){
      cin >> x >> y;
      a[x] = y;
    }

    cin >> m;

    for(int i=0;i<m;i++){
      cin >> z;
      if(a[z].empty() == false) cout << a[z];
      else cout << z;
    }
    cout << endl;
  }
}