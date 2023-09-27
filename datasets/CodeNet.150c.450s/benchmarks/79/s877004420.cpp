#include<iostream>
using namespace std;
int main(){
  int n,r,i,p,c,v;
  int array[100];
  int box[100];
  while(1){
    cin>>n>>r;
   
    if(n==0&&r==0) break;
    else{
      for(i=0;i<n;i++){
	box[i]=i+1;
      }
     
      for(i=0;i<r;i++){
	v=i;
	cin>>p>>c;
	for(i=0;i<c;i++){
	  array[i]=box[n-p-i];
	 
	}
	for(i=0;i<p-1;i++){
	 box[n-p-c+1+i]=box[n-p+1+i];
	  
	}
	for(i=0;i<c;i++){
	  box[n-1-i]=array[i];
	  
	}
	i=v;
      }
	cout<<box[n-1]<<endl;

    }
  }
  return 0;
}