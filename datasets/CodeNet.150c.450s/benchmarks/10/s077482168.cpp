#include<iostream>
using namespace std;

int main(){
	int n,b,f,r,v;
int daigaku[5][4][11]={};
	cin>>n;
	for(int q=0;q<n;q++){
		cin>>b>>f>>r>>v;
		daigaku[b-1][f-1][r-1]+=v;
	}
	
	for(int B=0;B<=3;B++){
		for(int F=0;F<=2;F++){
			for(int R=0;R<=9;R++){
				cout<<" "<<daigaku[B][F][R];
			}
			cout<<endl;
		}
		if(B!=3){
		cout<<"####################"<<endl;
		}
	}
					
	return 0;
}