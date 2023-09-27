#include<iostream>
using namespace std;
int main(){
	int n,x,sum;
		for(;;){
		cin>>n>>x;
		if(n==0&&x==0)
			break;
		sum=0;
    for(int i=1;i<n+1;i++){
      for(int j=i+1;j<n+1;j++){
    for(int k=j+1;k<n+1;k++){
      if((i+k+j)==x)sum++;
    }
      }
    }
    cout<<sum<<endl;

		}

	return 0;
}