
 #include <string>
 #include <vector>
 #include <algorithm>
 #include <iostream>
 #include <cstdio>
 #include <cstdlib>
 #include <cmath>
 #include <queue>
 #include <map>
 #define INF 100000000
 
 using namespace std;
 typedef long long ll;
 
 ll num[21]={0};
 
 long long int kai(ll n){
 if(num[n]!=0)return num[n];
 else{
 num[n]=n*kai(n-1);
 return num[n];
 }
 }
 
 int main(){
 int n;
 num[0]=num[1]=1;
 cin>>n;
 cout<<kai(n)<<endl;
 }
 