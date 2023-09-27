#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,p,P;
  int have[50];
  int remain=0;
  int plase=0;
  while(1){
    for(int i=0;i<50;i++){
      have[i]=0;
    }
    cin>>n>>p;
    P=p;
    plase=0;
    if(n==0 && p==0) break;
    while(1){
      if(have[plase%n]==P) break;
      if(p==0){
	p=have[plase%n];
	have[plase%n]=0;
	plase++;
      }else{
	have[plase%n]++;
	plase++;
	p--;
      }
    }
    cout<<plase%n<<endl;
  }
  return 0;
}

