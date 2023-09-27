#include<iostream>
using namespace std;
int main(){
  while(1){
    int n,p;
    cin>>n>>p;
    if(n==0&&p==0)break;
    int k=p;
    int ch[50]={},f=0;
    while(1){
      if(k==0){
	k=ch[f%n];
	ch[f%n]=0;
      }     
      else{
	ch[f%n]++;
	k--;
      }	 
      if(ch[f%n]==p)break;
      f++;
    }
    cout<<f%n<<endl;
  } 
  return 0;
}