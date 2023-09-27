#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<functional>
#include<map>
#include<stack>
#include<set>
#include<cmath>

#define REP(i,s,e) for(int i=int(s);i<=int(e);i++)
#define rep(i,n) for(int i=0;i<int(n);i++)

#define EPS 1e-6

using namespace std;


int main(){

vector<int>v;
int a;
rep(i,5){

cin >> a;
v.push_back(a);

}

sort(v.begin(),v.end(),greater<int>());

cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << " " << v[4] << endl;

return 0;
}