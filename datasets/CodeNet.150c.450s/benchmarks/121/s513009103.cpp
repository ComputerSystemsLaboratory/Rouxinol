//AOJ0118
#include<iostream>
#include<string>
using namespace std;
int H,W;
char table[102][102];

void kesu(int y,int x,char now){
	if(table[y][x]!=now)
		return ;
		
	table[y][x]='x';
	
	kesu(y+1,x,now);
	kesu(y-1,x,now);
	kesu(y,x+1,now);
	kesu(y,x-1,now);
		


}


int main(){

	while(true){
		cin>>H>>W;
		if(H==0&&W==0)break;
		for(int i=0;i<102;i++)for(int j=0;j<102;j++)table[i][j]='x';
		for(int i=1;i<=H;i++){
			for(int j=1;j<=W;j++){
				char tmp;
				cin>>tmp;
				table[i][j]=tmp;
			}
		}
	
		int ans;
		ans=0;
		
		for(int i=1;i<=H;i++){
			for(int j=1;j<=W;j++){
				if(table[i][j]!='x'){
					kesu(i,j,table[i][j]);
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}