#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using Vec = vector<int>;

int main() {
    
int n;
cin>>n;
Vec vec(1000000);
int x=1,y=1,z=1,ct=0;
for(int i=1;i<=100;i++){
    
    for(int j=1;j<=100;j++){

       for(int k=1;k<=100;k++){
  
       x=i,y=j,z=k;

       vec[ct]=x*x+y*y+z*z+x*y+y*z+z*x;
       ct++;
       }
    }

}
 

int t=0;
sort(vec.begin(),vec.end());
for(int i=1;i<=n;i++){
  int count=0;
    for(int j=t;j<1000000;j++){
   
   if(vec[j]==i){
       count++;
   }
    if(vec[j]>i){
       t=j-1;
       cout<<count<<endl;
       break; 
   } 

    }
}

 

}
 