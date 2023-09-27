#include<iostream>
using namespace std;
int main(){
  int ei,ma,sc,en;
  int max=0,nm;
  for(int i=0;i<2;i++){
    cin>>ei>>ma>>sc>>en;
    nm=ei+ma+sc+en;
    if(max<nm){
      max=nm;
    }
  }
  cout<<max<<endl;
  return 0;
}