#include<iostream>
#include<cstring>
using namespace std;

int main(){
	long long int k[21][101];
	int n;
	int num[100];
	long long int sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	memset(k,0,sizeof(k));
	k[num[0]][0]=1;
	for(int i=1;i<n-1;i++){
		for(int j=0;j<=20;j++){
			if(j+num[i]<=20){
				k[j+num[i]][i] += k[j][i-1];
			}
			if(j-num[i]>=0){
				k[j-num[i]][i] += k[j][i-1];
			}
		}
	}
	sum += k[num[n-1]][n-2];
	cout<<sum<<endl;
	return 0;
}