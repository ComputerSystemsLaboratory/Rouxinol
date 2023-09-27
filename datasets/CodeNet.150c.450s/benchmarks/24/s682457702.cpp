#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
int N;
long long int M;

while(1){
cin>>N>>M;if(N==0&&M==0)break;
int D[10002][2]={};
int P[10001]={};
for(int i=0;i<N;i++)
cin>>D[i][0]>>D[i][1];
int c=0;
for(int i=0;i<N;i++)
	for(int j=N-1;j>i;j--)
	{if(D[j][1]>D[j-1][1]){
		int t=D[j][1];D[j][1]=D[j-1][1];D[j-1][1]=t;
		int T=D[j][0];D[j][0]=D[j-1][0];D[j-1][0]=T;
}
	}

for(int i=0;i<N;i++)
	if(D[i][0]>0){if(M>=D[i][0]){M-=D[i][0];D[i][0]=0;}
	else{D[i][0]-=M;M=0;}
	}

for(int i=0;i<N;i++)
	c+=D[i][1]*D[i][0];

cout<<c<<endl;

}

return 0;
}