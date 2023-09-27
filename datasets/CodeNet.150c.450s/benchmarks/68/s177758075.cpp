#include<iostream>
using namespace std;

int main(void){
  int n;
  int a[1000]={};
  int min=1000000;
  cin>>n;
  while(n!=0){
    min=1000000;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
	if(i!=j){
	  int sa;
	  if(0>(a[i]-a[j])){
	    sa=a[j]-a[i];
	  }else{
	    sa=a[i]-a[j];
	  }
	  //  cout<<sa<<" "<<min<<endl;
	  if(sa<min)min=sa;
	  //  cout<<sa<<" "<<min<<endl;
	}
      }
    }
    cout<<min<<endl;
    cin>>n;
  }
}