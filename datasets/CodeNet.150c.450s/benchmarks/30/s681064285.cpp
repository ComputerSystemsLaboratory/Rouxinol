#include <iostream>
using namespace std;

int main(){
  int a,m[101],cou,min,minhako;
  cin >>a;
  for(int i;i<a;i++)cin>>m[i];
  cou=0;
  for(int i=0;i<a-1;i++){
    min=101;
    for(int j=i;j<a;j++){
      if(m[j]<min){
	min=m[j];
	minhako=j;
      }
    }
    swap(m[i],m[minhako]);
    if(i!=minhako)cou++;
  }
  for(int i=0;i<a;i++){
    cout<<m[i];
    if(i<a-1)cout<<" ";
  }
  cout<<endl;
  cout<< cou<<endl;
  return 0;
}