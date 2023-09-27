#include<iostream>
using namespace std;
int main(){

  int n,q,wan,player[50],j;

  while(1){

    cin >>n>>q;

    if(n == 0 && q == 0)break;

    for(int i=0 ; i < n ; i++)player[i]=0;
    wan=q;
    j=0;
    
    while(1){
      
      if(wan != 0){
	player[j]++;
	wan--;
	if(wan == 0 && player[j] == q){
	  cout <<j<<endl; 
	  break;
	}
      }else{
	wan=player[j];
	player[j]=0;
      }   
      j++;
      if(j >= n)j=0;
    }
    
  }
  
  return 0;
}