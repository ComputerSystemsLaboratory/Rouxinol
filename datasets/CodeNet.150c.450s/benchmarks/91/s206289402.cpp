#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		bool array[1000500];
		for(int i=0;i<=n;i++){
			array[i]=true;
		}

		int count=0;
		array[0]=array[1]=false;
		for(int i=1;i<=n;i++){
			if(array[i]){
				count++;
				for(int j=i*2;j<=n;j+=i){
					array[j]=false;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}