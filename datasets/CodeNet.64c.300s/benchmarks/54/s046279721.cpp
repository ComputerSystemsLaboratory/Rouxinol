#include<iostream>
using namespace std;

int main()
{
	long long int total1[21],total2[21];
	int n;
	for(int i=0;i<21;i++){
		total1[i]=0;
		total2[i]=0;
	}
	
	cin>>n;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		
		if(!i){total1[k]++;}
		
		else if(i<n-1){
			for(int j=0;j<21;j++){
				if(j+k<=20){
					total2[j+k]+=total1[j];
				}
				if(j-k>=0){
					total2[j-k]+=total1[j];
				}
			}
			for(int j=0;j<21;j++){
				total1[j]=total2[j];
				total2[j]=0;
			}
		}
		else{
			cout<<total1[k]<<endl;
		}
	}
	
	return 0;
}