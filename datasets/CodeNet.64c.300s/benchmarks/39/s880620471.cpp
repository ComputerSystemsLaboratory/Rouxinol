
#include<iostream>
#include<string>
#include<cmath>
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

int main(void){
  int n ; 
  while(cin >> n){
    int cnt = 0;
    rep(i,10)
      rep(j,10)
      rep(k,10)
      rep(l,10)
      if(i+j+k+l==n){
	cnt++;
	//	cout<< i << " " << j << " " << k << " " << l << endl;
	//	cout<< cnt << endl;
      }
    cout<< cnt << endl;
  }
}