#include<iostream>
#include<string>
#include<algorithm>
#define lp(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
	int dice[7];
	lp(i,6){
		cin>>dice[i];
	}
	string com;
	cin>>com;
	swap(dice[3],dice[4]);
	lp(i,com.size()){
		int a=dice[0],b=dice[1],c=dice[2],d=dice[3],e=dice[4],f=dice[5];
		//cout<<com[i]<<endl;
		if(com[i]=='S'){
			dice[0]=d;
			dice[1]=a;
			dice[2]=c;
			dice[3]=f;
			dice[4]=e;
			dice[5]=b;
		}
		
		else if(com[i]=='N'){
			dice[0]=b;
			dice[1]=f;
			dice[2]=c;
			dice[3]=a;
			dice[4]=e;
			dice[5]=d;
		}
		
		else if(com[i]=='E'){
			dice[0]=e;
			dice[1]=b;
			dice[2]=a;
			dice[3]=d;
			dice[4]=f;
			dice[5]=c;
		}
		
		else{
			dice[0]=c;
			dice[1]=b;
			dice[2]=f;
			dice[3]=d;
			dice[4]=a;
			dice[5]=e;
		}
	}
		cout<<dice[0]<<endl;
	return 0;
}
