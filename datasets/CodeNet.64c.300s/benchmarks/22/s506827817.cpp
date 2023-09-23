#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



int main(){
  int N;
  cin >>N;
  int a,b,c;
  while( cin >> a >> b >>c){
    if((a*a==b*b + c*c || b*b == a*a + c*c )|| c*c == a*a + b*b) cout <<"YES" << endl;
      else  cout <<"NO" << endl;
  }
}

