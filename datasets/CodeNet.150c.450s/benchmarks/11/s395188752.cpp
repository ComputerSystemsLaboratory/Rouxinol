#include<iostream>
using namespace std;

int main(){
	int n,num,card[5][14];
	char m;
	for(int M=0;M<4;M++){
		for(int N=1;N<=13;N++){
			card[M][N]=0;
		}
	}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m>>num;
		switch(m){
			case 'S': card[0][num]=1; break;
			case 'H': card[1][num]=1; break;
			case 'C': card[2][num]=1; break;
			case 'D': card[3][num]=1; break;
		}
	}
	for(int M=0;M<4;M++){
		for(int N=1;N<=13;N++){
			if(card[M][N]==1) continue;
			if(M==0) m='S';
			if(M==1) m='H';
			if(M==2) m='C';
			if(M==3) m='D';
			cout<<m<<" "<<N<<endl;
		}
	}
		
	return 0;
}