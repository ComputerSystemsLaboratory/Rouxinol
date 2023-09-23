#include <iostream>
using namespace std;


int main(){
  int a,b,c,d,totala=0,totalb=0;
  cin>>a>>b>>c>>d;
  totala=a+b+c+d;
  cin>>a>>b>>c>>d;
  totalb=a+b+c+d;
  if(totala>totalb){
    cout<<totala<<endl;
  }else if(totala<totalb){
    cout<<totalb<<endl;
  }else if(totala==totalb){
    cout<<totala<<endl;
  }


  return 0;
}