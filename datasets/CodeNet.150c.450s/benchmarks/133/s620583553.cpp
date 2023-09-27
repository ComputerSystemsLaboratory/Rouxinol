#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i=0; i<n; ++i)
#define repit(it, li) for(auto it=li.begin(); it!=li.end(); it++)
#define ll long long int

int main(){
   int d;
   cin>>d;
   int c[26];
   rep(i, 26) cin>>c[i];
   int s[365][26];
   rep(i, d) rep(j, 26) cin>>s[i][j];

   int t[365];
   rep(i, d){cin>>t[i]; t[i]--;}

   ll sc=0;
   int las[26];
   rep(i, 26) las[i]=-1;

   rep(i, d){
      sc+=s[i][t[i]];
      las[t[i]]=i;
      rep(j, 26) sc -= c[j]*(i-las[j]);

      cout << sc << endl;
   }

   return 0;
}
