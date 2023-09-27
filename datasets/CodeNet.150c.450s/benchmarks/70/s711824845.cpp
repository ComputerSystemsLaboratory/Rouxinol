#include<iostream>
using namespace std;
int main(){
	int day[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int i,j,ans;
	int m,d;
	while(1){
		cin>>m>>d;
		if(m==0&&d==0)break;
		if(m==1&&d<5){
			ans=(d+2)%7;
		}
		else{
			int sum=0;
			for(i=1;i<m;i++){
				sum+=day[i];
			}
			sum+=d;
			ans=(sum-5)%7;
		}
		if(ans==0){
			cout<<"Monday"<<endl;
		}
		else if(ans==1)cout<<"Tuesday"<<endl;
		else if(ans==2)cout<<"Wednesday"<<endl;
		else if(ans==3)cout<<"Thursday"<<endl;
		else if(ans==4)cout<<"Friday"<<endl;
		else if(ans==5)cout<<"Saturday"<<endl;
		else cout<<"Sunday"<<endl;
	}
	return 0;
}