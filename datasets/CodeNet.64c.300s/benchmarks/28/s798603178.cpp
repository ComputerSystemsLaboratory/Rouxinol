#include <iostream>
using namespace std;
int main(){
int w,h,x,y,r,a,b,c;
a=0;
cin>>w>>h>>x>>y>>r;
if(x<r){
 a+=1;
}
b=x+r;
if(b>w){
 a+=1;
}
if(y<r){
 a+=1;
}
c=y+r;
if(c>h){
 a+=1;
}
if(a==0){
 cout<<"Yes"<<endl;
}else{
 cout<<"No"<<endl;
}
return 0;
}