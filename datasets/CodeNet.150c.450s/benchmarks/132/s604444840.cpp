#include <iostream>

using namespace std;

int main(){
	int n,p;
	while(1){
		cin>>n>>p;
		if(n==0&&p==0){
			break;
		}
		int sum=p;
		int cnt=0;
		int *data;
		int state=0;
		data = new int[n];
		for(int i=0;i<n;i++){
			data[i]=0;
		}
		while(1){
			
			if(sum==0){
				sum+=data[cnt];
				data[cnt]=0;
			}
			else{
				data[cnt]++;
				sum--;
				if(sum==0){
					int flag=0;
					for(int i=0;i<n;i++){
						if(i==cnt)continue;
						else{
							if(data[i]>0){
								flag=1;
							}
						}
					}
					if(flag==0){
						cout<<cnt<<endl;
						state=2;
					}
				}
			}
			cnt++;
			cnt%=n;
			if(state==2)break;
		}
	}
	return 0;
}