#include<iostream>
using namespace std;
int main(){
	
	int n,Length[100],i,j;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>Length[i+1];
	}for(j=n;;j--){
		if(j==0){
			break;
		}if(j==1){
			cout<<Length[j]<<endl;
		}else{
			cout<<Length[j]<<" ";
		}
	}
	return 0;

}