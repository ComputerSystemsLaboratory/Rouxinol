#include<iostream>
#include<string>
#include<cmath>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<complex>
using namespace std ;
typedef vector<int> vi ;
typedef vector<vi> vvi ;
typedef vector<string> vs ;
typedef pair<int, int> pii; 
typedef long long ll ;

#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define rep(i,a) loop(i,0,a)
#define all(a) (a).begin(),(a).end()

int gcd (int a , int b){
  if(b>0)
    return gcd(b,a%b);
  else 
    return a;
}
int lcm(int a,int b){
  return ((a / gcd(a,b)) * b);
}
int main(void){
  int a,b;
  while(cin >> a >> b){
    cout<< gcd(a,b) << " " << lcm(a,b) << endl;
  }
}