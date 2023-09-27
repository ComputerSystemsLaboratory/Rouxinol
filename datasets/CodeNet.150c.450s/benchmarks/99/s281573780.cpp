#include<cstdio>
#include<iostream>
#include<string>

using namespace std;


int main(void){

	int n;
	string MCXI[2];
	int tmp;
	int kuri;
	int M[2],C[2],X[2],I[2];
	int am,ac,ax,ai;
	cin>>n;
	

	for(int j=0;j<n;j++){
		cin>>MCXI[0]>>MCXI[1];

		for(int i=0;i<2;i++){
			M[i]=0;
			C[i]=0;
			X[i]=0;
			I[i]=0;
		}

		for(int i=0;i<2;i++){

			tmp=MCXI[i].find('i');
			if(tmp!=-1){
				I[i]=1;
				if(tmp>0){
					if(MCXI[i][tmp-1]!='m'&&MCXI[i][tmp-1]!='c'&&MCXI[i][tmp-1]!='x'&&MCXI[i][tmp-1]!='i'){
						I[i]*=MCXI[i][tmp-1]-'0';
					}
				}
			}

			tmp=MCXI[i].find('x');
			if(tmp!=-1){
				X[i]=1;
				if(tmp>0){
					if(MCXI[i][tmp-1]!='m'&&MCXI[i][tmp-1]!='c'&&MCXI[i][tmp-1]!='x'&&MCXI[i][tmp-1]!='i'){
						X[i]*=MCXI[i][tmp-1]-'0';
					}
				}
			}

			tmp=MCXI[i].find('c');
			if(tmp!=-1){
				C[i]=1;
				if(tmp>0){
					if(MCXI[i][tmp-1]!='m'&&MCXI[i][tmp-1]!='c'&&MCXI[i][tmp-1]!='x'&&MCXI[i][tmp-1]!='i'){
						C[i]*=MCXI[i][tmp-1]-'0';
					}
				}
			}

			tmp=MCXI[i].find('m');
			if(tmp!=-1){
				M[i]=1;
				if(tmp>0){
					if(MCXI[i][tmp-1]!='m'&&MCXI[i][tmp-1]!='c'&&MCXI[i][tmp-1]!='x'&&MCXI[i][tmp-1]!='i'){
						M[i]*=MCXI[i][tmp-1]-'0';
					}
				}
			}
		}
		am=0,ac=0,ai=0,ax=0;
		kuri=0;
		ai=(I[0]+I[1]+kuri)%10;
		kuri=(I[0]+I[1]+kuri)/10;
		ax=(X[0]+X[1]+kuri)%10;
		kuri=(X[0]+X[1]+kuri)/10;
		ac=(C[0]+C[1]+kuri)%10;
		kuri=(C[0]+C[1]+kuri)/10;
		am=(M[0]+M[1]+kuri)%10;
		kuri=(M[0]+M[1]+kuri)/10;

		if(am!=0){
			if(am!=1) cout<<am<<"m";
			else cout<<"m";
		}
		if(ac!=0){
			if(ac!=1) cout<<ac<<"c";
			else cout<<"c";
		}
		if(ax!=0){
			if(ax!=1) cout<<ax<<"x";
			else cout<<"x";
		}
		if(ai!=0){
			if(ai!=1) cout<<ai<<"i";
			else cout<<"i";
		}
		cout<<endl;
	}

	return 0;
}