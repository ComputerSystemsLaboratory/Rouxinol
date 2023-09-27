#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define INF 1000000001
int v,e,r,cnt=0;
vector<pair<int,int> >edge[100000]; 
int d[100000];
bool check[100000];
priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >vrt;
int main(void){
   cin>>v>>e>>r;
   for(int i=0;i<v;i++){
       d[i]=INF;
       check[i]=false;
   }
   d[r]=0;
   check[r]=true;
   for(int i=0;i<e;i++){
       int s,t,c;
       cin>>s>>t>>c;
       edge[s].push_back(make_pair(t,c));
   }
   vrt.push(make_pair(0,r));
   while(cnt<v){
       while(!vrt.empty()&&d[vrt.top().second]!=vrt.top().first)vrt.pop();
       int n=vrt.top().second;
       check[n]=true;
       vrt.pop();
       for(int i=0;i<edge[n].size();i++){
           int s=edge[n][i].first,cn=edge[n][i].second;
           if(!check[s]&&d[n]+cn<d[s]){
               d[s]=d[n]+cn;
               vrt.push(make_pair(d[s],s));
           }
       }
       cnt++;
   }
   for(int i=0;i<v;i++){
       if(d[i]==INF)cout<<"INF\n";
       else cout<<d[i]<<endl;
   }
}