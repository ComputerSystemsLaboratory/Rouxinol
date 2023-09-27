#include<bits/stdc++.h> 
using namespace std; 
#define ll long long 
#define sort(v) sort(v.begin(),v.end()) 
#define pb push_back
/*
ll ar[1000000+9]={0}; 
vector<ll>v;
void seiv() { 
ll n=1000000,i,j; 
ar[1]=1; 
for(i=4;i<=n;i+=2)ar[i]=1; 
for(i=3;i<=n;i+=2) 
{ if(ar[i]==0) 
{ for(j=i*i;j<=n;j+=i*2)ar[j]=1; }
                
 } 
    for(i=2;i<=2244;i++){if(ar[i]==0)v.pb(i);}}*/
int main()
 {
   map<ll,ll>m;
   int a,b,c,d,i,j,k,l;
    for(i=1;i<=100;i++)
    {
   for(j=1;j<=100;j++)
   {
for(k=1;k<=100;k++)
{
b=(i*i)+(j*j)+(k*k)+(i*j)+(i*k)+(j*k);m[b]++;
}
   }
    }
cin>>a;
        for(i=1;i<=a;i++)
      {cout<<m[i]<<endl;}
 }