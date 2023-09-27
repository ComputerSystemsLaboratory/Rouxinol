#include<iostream>
#include<queue>
#include<string>
#include <algorithm>
using namespace std;

int main(){

int n,q,l;
string name;

queue<pair<string,int> >Q;

cin >> n >> q;

for(int i=1;i<=n;i++){
  cin >> name >> l ;
  Q.push(make_pair(name,l));
 }
 pair<string,int>u;
 int b=0,a;


 while(!Q.empty()){
   u=Q.front();
   Q.pop();
   a = min(u.second,q);
   u.second-=a;
   b+=a;
   if(u.second<=0){
     cout <<u.first << " " << b << endl;
   }
   else{
     Q.push(u);
   }
 }


 return 0;
}