#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	
	int a,b;
	
	
	while(1){
		cin>>a>>b;
		if(a==0&&b==0)break;
		char P[150][150]={};
	for(int i=0;i<a;i++)
		{
			string q;cin>>q;
			for(int I=0;I<b;I++)
			P[i][I+1]=q[I];
		}
	int X=1;
	int M[120][120]={};
	for(int i=0;i<a;i++)
		for(int j=1;j<=b;j++)
		{
			if(P[i][j]!=P[i][j-1])X++;
			M[i][j]=X;
			//if(P[i][j]==P[i][j-1]&&j>0)M[i][j]==M[i][j-1];
		}
		/*
		for(int i=0;i<a;i++){cout<<endl;
		for(int j=1;j<=b;j++)
		{ cout<<M[i][j];}
		}
	*/

		for(int i=0;i<a;i++)
		for(int j=1;j<=b;j++)
			if(P[i+1][j]==P[i][j]){
				int Y=M[i+1][j];
				//M[i][j]=M[i-1][j];
				for(int I=0;I<a;I++)
					for(int J=0;J<=b;J++)
						if(M[I][J]==Y)M[I][J]=M[i][j];
			}
		
	
		bool F[10004]={};
		int ans=0;
		for(int i=0;i<a;i++)
		for(int j=1;j<=b;j++){
			F[M[i][j]]=true;
		}
		for(int i=1;i<10002;i++)
			if(F[i]==true)ans++;/*
		for(int i=0;i<a;i++){cout<<endl;
		for(int j=1;j<=b;j++)
		{ cout<<M[i][j];}
		}
	
	
	*/
	
		
	cout<<ans<<endl;
	}
	return 0;
}
				