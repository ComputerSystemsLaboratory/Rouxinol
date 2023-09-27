#include<iostream>
using namespace std;

int main(){
  int Ainfo,Amath,Ascien,Aeng,Atotal;
  int Binfo,Bmath,Bscien,Beng,Btotal;
  cin>>Ainfo>>Amath>>Ascien>>Aeng;
  cin>>Binfo>>Bmath>>Bscien>>Beng;
  Atotal=Ainfo+Amath+Ascien+Aeng;
  Btotal=Binfo+Bmath+Bscien+Beng;
  if(Atotal>=Btotal){
    cout<<Atotal<<'\n';
  }else{
    cout<<Btotal<<'\n';
  }
  return 0;
}