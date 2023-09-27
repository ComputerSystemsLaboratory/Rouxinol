//ITP1_7_C
#include<iostream>
using namespace std;

int main()
{
	int r,c,i,j,k=0;
	
	cin>>r>>c;
	
	int irc[101][101];
	
	for(i=0;i<r+1;i++){
		for(j=0;j<c+1;j++){
			irc[i][j]=0;
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin>>irc[i][j];
			irc[i][c]+=irc[i][j];
			irc[r][j]+=irc[i][j];
			irc[r][c]+=irc[i][j];
		}
	}
	
	for(i=0;i<r+1;i++){
		for(j=0,k=0;j<c+1;j++,k++){
			if(k!=0){
			cout<<" ";
			}
			cout<<irc[i][j];
		}
		cout<<endl;
	}
			
	return 0;
}