#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
int main(){
	int task,data[50],n;
	while(cin>>n>>task,n,task){
		for(int i=0;i<n;i++){
			data[i]=0;
		}
		while(1){
			for(int i=0;i<n;i++){
				if(task>0){
					data[i]++;
					task--;
				}else if(data[i]>0){
					task+=data[i];
					data[i]=0;
				}
			}
			int cnt=0,ans;
			for(int i=0;i<n;i++){
				if(data[i]>0){
					ans=i;
					cnt++;
				}
			}
			if(cnt==1&&task==0){
				cout<<ans<<endl;
				break;
			}
		}
	}
}