#include<iostream>
using namespace std;

int main(){
	int n[100];
	int max[2]={0,-1},min[2]={1000,-1},sum=0;
	int m;
	while(true){
		cin>>m;
		if(m==0){
			break;
		}
		max[0]=0;
		max[1]=-1;
		min[0]=1000;
		min[1]=-1;
		sum=0;
		for(int i=0;i<m;i++){
			cin>>n[i];
			if(n[i]>max[0]){
				max[1]=i;
				max[0]=n[i];
			}
			if(n[i]<min[0]){
				min[1]=i;
				min[0]=n[i];
			}
		}
		for(int i=0;i<m;i++){
			if(max[1]!=i && min[1]!=i){
				sum += n[i];
			}
		}
		cout<<sum/(m-2)<<endl;
	}
	return 0;
}