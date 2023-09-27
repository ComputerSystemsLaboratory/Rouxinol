#include<iostream>
#include<string>
#include<algorithm>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define rp(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
	int dice[7],cdice[7];
	lp(i,1,7){
		cin>>dice[i];
		cdice[i]=dice[i];
	}
	int n,x,y;
	cin>>n;
	rp(i,n){
		cin>>x>>y;
		lp(j,1,7){
			dice[j]=cdice[j];
		}
		int f=0;
		while(1){
			if((dice[2]==x||dice[5]==x)&&(dice[1]==y||dice[6]==y)){
				int a=dice[1],b=dice[2],c=dice[3],d=dice[4],e=dice[5],f=dice[6];
			dice[1]=a;
			dice[2]=d;
			dice[3]=b;
			dice[4]=e;
			dice[5]=c;
			dice[6]=f;
			}
			
			if(dice[1]==x&&dice[2]==y)break;
		while(1){
			if(dice[1]==x||dice[2]==x||dice[5]==x)break;
			int a=dice[1],b=dice[2],c=dice[3],d=dice[4],e=dice[5],f=dice[6];
			dice[1]=d;
			dice[2]=b;
			dice[3]=a;
			dice[4]=f;
			dice[5]=e;
			dice[6]=c;
			//cout<<1<<endl;
			}
		while(1){
			if(dice[2]==y)break;
			int a=dice[1],b=dice[2],c=dice[3],d=dice[4],e=dice[5],f=dice[6];
			dice[1]=a;
			dice[2]=d;
			dice[3]=b;
			dice[4]=e;
			dice[5]=c;
			dice[6]=f;
			//cout<<1<<endl;
			}
		}
		cout<<dice[3]<<endl;
	}
	return 0;
}
