#include<iostream>
using namespace std;

int main(){
  int n,m,p;
  while(cin>>n>>m>>p && n+m+p){
    int sum=0;
    int correct=0;
    for(int i=0;i<n;i++){
      int input;
      cin>>input;
      sum+=input;
      if(i+1==m) correct=input;
    }
    sum=sum*(100-p);
    if(correct==0)
      cout<<0<<endl;
    else
      cout<<sum/correct<<endl;

  }
}