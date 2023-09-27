#include<iostream>
using namespace std;

int card[50];
int change1[50],change2[50];
int n,r,p,c;

int main(){

  while(1){
    cin >> n >> r;
    if(n+r==0)
      break;
    
    for(int i=0;i<n;i++)
      card[i]=n-i;
    
    for(int i=0;i<r;i++){
      cin >> p >> c;
      
      for(int j=0;j<p-1;j++)
	change1[j]=card[j];
      for(int j=0;j<c;j++)
	change2[j]=card[p+j-1];
      
      for(int j=0;j<c;j++)
	card[j]=change2[j];
      for(int j=0;j<p-1;j++)
	card[c+j]=change1[j];
    }
    
    cout << card[0] << endl;
    
  }
  return 0;
}