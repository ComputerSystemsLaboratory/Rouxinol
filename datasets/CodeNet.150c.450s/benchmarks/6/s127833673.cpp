#include<bits/stdc++.h>

using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
ll sum(ll n){

return ((n*(n+1))/2);

}
int main(){

fast();

int a,b,c;
cin>>a>>b>>c;

if(a<b){
     if(b<c){
         if(c>a){
             cout<<"Yes"<<endl;
         }
         else cout<<"No"<<endl;
     }
     else cout<<"No"<<endl;
}
else cout<<"No"<<endl;

return 0;
}

