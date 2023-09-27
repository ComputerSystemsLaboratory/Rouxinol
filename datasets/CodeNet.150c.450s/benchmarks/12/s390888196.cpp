#include <iostream>
using namespace std;

int main(){
 int H,a[251];
 cin>>H;
 for(int i=1;i<H+1;i++){
     cin>>a[i];
 }
 
 for(int i=1;i<H+1;i++){
     cout<<"node "<<i<<": key = "<<a[i]<<", ";
     if(i/2>=1)cout<<"parent key = "<<a[i/2]<<", ";
     if(2*i<=H)cout<<"left key = "<<a[2*i]<<", ";
     if(2*i+1<=H)cout<<"right key = "<<a[2*i+1]<<", ";
     cout<<endl;
}
return 0;
}
