#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	//?????????????????°???
	int test[28];
	int sum[31];
	for(int i=0;i<28;i++){
		cin>>test[i];
	}
	for(int j=0;j<31;j++){
		sum[j]=0;
	}
	for(int k=0;k<28;k++){
		sum[test[k]]=1;
	}
	for(int w=1;w<=30;w++){
		if(sum[w]==0){
			cout<<w;
			cout<<"\n";
		}
	}
	return 0;
}