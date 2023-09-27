#include <bits/stdc++.h>
#ifdef dbg
#include "./printer.hpp"
#else
#define dump(x) void(0)
#endif

using namespace std;

#define MOD 1000000007
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define ll long long
#define ull unsigned long long
#define pb push_back
#define ALL(x) ((x).begin(), (x).end())
#define sync(); ios_base::sync_with_stdio(0);

inline long  toInt(string s) {long  v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}


int main(){
   sync();

   int a,b,c;
   cin >> a >> b >>c;
   if(a < b && b < c){
     cout << "Yes" <<endl;
     
   }else{
     cout << "No" <<endl;
   }
   
   
}