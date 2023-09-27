#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main(){
	int n,cnt=0,ans,sosu[1000003]={0};
	
	for(int i=2;i<1000002;i++){
		bool flag=true;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
			flag=false;
			break;//素数でない時点で打ち切り
			}
		}
		/*if(flag){
		cnt++;
		sosu[i]=cnt;
		}*/
		if(flag)cnt++;
		sosu[i]=cnt;		
	}
	//for(int i=0;i<31;i++)cout<<sosu[i]<<" ";
	while(cin>>n){
	cout<<sosu[n]<<endl;
	}
    return 0;
}