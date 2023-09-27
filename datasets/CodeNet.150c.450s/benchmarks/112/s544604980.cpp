#include<string>
#include<iostream>
using namespace std;
int main(){
  int n,m,adres;
  char t[9999];
  char moji;
  while(1){
    cin>>n;
    for(int i=0;i<10000;i++){
      t[i]=' ';
    }
    if(n==0)break;
    for(int i=0;i<n;i++){
      cin>>moji;
      adres=(moji-'0');
      cin>>moji;
      t[adres]=moji;
    }
    //cout<<moji-'0'<<endl;
    cin>>m;
    
    for(int i=0;i<m;i++){
      cin>>moji;
      adres=moji-'0';
      if(t[adres]==' '){
	cout<<moji;
      }else{
	cout<<t[adres];
      }
    }
    
    cout<<endl;

  }
  return 0;
}