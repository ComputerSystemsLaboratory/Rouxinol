#include<iostream>
using namespace std;
int main(){
	int n,i,j,t[100][100]={0};
	int b,f,r,v;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>b>>f>>r>>v;
		if(b==1){
			t[f][r]+=v;		
		}
		else if(b==2){
			t[f+4][r]+=v;		
		}
		else if(b==3){
			t[f+8][r]+=v;		
		}
		else if(b==4){
			t[f+12][r]+=v;		
		}
	}
	for(i=1;i<=15;i++){
		if(i%4==0)cout<<"####################";
		else{
			for(j=1;j<=10;j++){
				cout<<" "<<t[i][j];
			}
		}
		cout<<endl;
	}
	return 0;
}