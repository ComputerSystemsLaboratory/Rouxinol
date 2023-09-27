#include <iostream>

using namespace std;

int main(){
	int n,m;
	while(cin>>n>>m){
		if(n==0 && m==0){
			break;
		}
		int *taro,*hanako;
		int tSum=0,hSum=0;
		int min=100000;
		int minT=-1,minH=-1;

		taro = new int[n];
		hanako=new int[m];
		for(int i=0;i<n;i++){
			cin>>taro[i];
			tSum+=taro[i];
		}
		for(int i=0;i<m;i++){
			cin>>hanako[i];
			hSum+=hanako[i];
		}

		int flag=0;

		for(int i=0;i<n;i++){
			int tmpTSum=tSum;
			int tmpHSum=hSum;

			for(int j=0;j<m;j++){
				tmpTSum=tSum;
				tmpHSum=hSum;
				tmpTSum = tmpTSum-taro[i]+hanako[j];
				tmpHSum = tmpHSum-hanako[j]+taro[i];

				if(tmpTSum == tmpHSum){
					if(taro[i]+hanako[j]<=min){
						min=taro[i]+hanako[j];
						minT=taro[i];
						minH=hanako[j];
					}
					flag=1;
					break;
				}
			}
		}

		if(flag==0){
			cout<<-1<<endl;
		}
		else{
			cout<<minT<<" "<<minH<<endl;
		}
	}

	return 0;
}