#include<iostream>
using namespace std;
int main(){
int a;
cin>>a;
for(int i=1;i<=a;i++){
  int j=i;  
    if(i%3==0){
      cout<<' '<<i;
    }
    else{
  while(true){
  if(j%10==3){
    cout<<' '<<i;
    break;
  }
    j/=10;
    if(j==0)
    break;
  }
  
}


}
cout<<'\n';
return 0;
}