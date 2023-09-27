#include <bits/stdc++.h>
using namespace std;
 
int main(){
   int a[7],b,c,d;
   for(int i=1;i<=6;i++){
    cin>>a[i];
   }
   cin>>b;
   for(int i=0;i<b;i++){
    cin>>c>>d;
   if(c==a[1]){
    if(d==a[2])cout<<a[3]<<endl;
    if(d==a[3])cout<<a[5]<<endl;
    if(d==a[5])cout<<a[4]<<endl;
    if(d==a[4])cout<<a[2]<<endl;
   }else if(c==a[2]){
    if(d==a[1])cout<<a[4]<<endl;
    if(d==a[4])cout<<a[6]<<endl;
    if(d==a[6])cout<<a[3]<<endl;
    if(d==a[3])cout<<a[1]<<endl;
   }else if(c==a[3]){
    if(d==a[1])cout<<a[2]<<endl;
    if(d==a[2])cout<<a[6]<<endl;
    if(d==a[6])cout<<a[5]<<endl;
    if(d==a[5])cout<<a[1]<<endl;
   }else if(c==a[4]){
    if(d==a[1])cout<<a[5]<<endl;
    if(d==a[5])cout<<a[6]<<endl;
    if(d==a[6])cout<<a[2]<<endl;
    if(d==a[2])cout<<a[1]<<endl;
   }else if(c==a[5]){
    if(d==a[1])cout<<a[3]<<endl;
    if(d==a[3])cout<<a[6]<<endl;
    if(d==a[6])cout<<a[4]<<endl;
    if(d==a[4])cout<<a[1]<<endl;
   }else if(c==a[6]){
    if(d==a[2])cout<<a[4]<<endl;
    if(d==a[4])cout<<a[5]<<endl;
    if(d==a[5])cout<<a[3]<<endl;
    if(d==a[3])cout<<a[2]<<endl;
   }
}
}