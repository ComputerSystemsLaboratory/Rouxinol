#include <iostream>
using namespace std;
int _s,a,b;
int solve(int c,int n,int s){
      if(!n) return s==_s;
      if(c>=10) return 0;
      return solve(c+1,n-1,s+c) + solve(c+1,n,s);
}
int main(){
      while(cin >> a >> _s,a||_s)cout <<solve(0,a,0)<< endl;
}