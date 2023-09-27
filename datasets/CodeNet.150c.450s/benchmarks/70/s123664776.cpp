#include <bits/stdc++.h>
#include <stdio.h>
#include <numeric>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define repone(i,n) for(int i=1;i<(int)(n);++i)
#define repo(i,o,n) for(int i=o;i<(int)(n);++i)
#define Rep(j,n) for(int j=0;j<(int)(n);++j)
#define Repo(j,o,n) for(int j=o;j<(int)(n);++j)
#define Repone(j,n) for(int j=1;j<(int)(n);++j)
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define int long long
#define pb(a) push_back(a)
#define eraser(v,i) (v).erase(v.begin()+(i))
#define pbpair(a,b) push_back(make_pair(a,b))
#define MOD 1000000007
#define INF 9223372036854775807
#define pairint pair<int,int>
int num[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
bool uru(int checkyear){if(checkyear%4==0){if(checkyear%100!=0||checkyear%400==0)return true;}return false;}
int gcd( int x, int y ){return y ? gcd(y, x%y) : x;}
bool pairCompare(const pairint& firstElof, const pairint& secondElof)
{
  if(firstElof.second!= secondElof.second)    return firstElof.second> secondElof.second;
  else return firstElof.first< secondElof.first;
}
signed main() {
int x=0,y=0,z=0,w=0,n=0,m=0;
std::vector<int> v(10);
while (std::cin >> x>>y,x) {
for(int i=0;i<x;i++){
  y+=num[i];
}
y%=7;
if(y==4)std::cout << "Sunday" << '\n';
else if(y==5)std::cout << "Monday" << '\n';
else if(y==6)std::cout << "Tuesday" << '\n';
else if(y==0)std::cout << "Wednesday" << '\n';
else if(y==1)std::cout << "Thursday" << '\n';
else if(y==2)std::cout << "Friday" << '\n';
else if (y==3) {std::cout << "Saturday" << '\n';
  /* code */
}
}
}

