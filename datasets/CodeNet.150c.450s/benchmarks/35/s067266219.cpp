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

   int n,a;
   while(true){


   cin >> n;
   if(n==0) break;

   vector<int>v;
   int s=0;
   v.push_back(s);

   rep(i,n){
   cin >> a;
   s+=a;
   v.push_back(s);
   }

   int m=-1000000;
   REP(i,1,n)
   REP(j,0,i-1)
   if(v[i]-v[j]>m) m=v[i]-v[j];

   cout << m << endl;

   v.clear();

   }

	return 0;
}