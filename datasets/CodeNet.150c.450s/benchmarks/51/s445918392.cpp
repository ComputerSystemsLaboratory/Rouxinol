#include<iostream>
#include<fstream>
#include<sstream>
#include<cstdio>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<cstdlib>
#include<climits>
#include<utility>
#include<cctype>
using namespace std;

#define ull unsigned long long
#define stt(it,order) sort(it.begin(),it.end(),order)
#define st(it) sort(it.begin(),it.end())
#define ll long long
#define rep(i,j) for(int i=0;i<j;++i)
#define loop(i,a,j) for(int i=a;i<j;++i)
#define mpi(it,table,T,E) for(map<T,E>::iterator it = table.begin();it!=table.end();++it)
#define PI 3.141592654
/*
ifstream fin("input.txt");
ofstream fout("output.txt");
#define cin fin
#define cout fout
*/


int main(){
   bool is_in[30];
   memset(is_in,0,sizeof(is_in));
   int n;
   while(scanf("%d",&n) != EOF)is_in[n-1] = true;
   rep(i,30){
      if(!is_in[i]){
         printf("%d\n",i+1);
      }
   }
   return 0;
}