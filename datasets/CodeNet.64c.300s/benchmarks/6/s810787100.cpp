#include <iostream>

using namespace std;
int main(void){
	int k[5][4][11] = {0};
	int num;
	int b,f,r,v;
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>b>>f>>r>>v;
		k[b][f][r]+=v;
	}

	for(int i=1;i<5;i++){
		for(int j=1;j<4;j++){
			for(int m=1;m<11;m++){
				cout<<" "<<k[i][j][m];
				if(m==10){
					cout<<endl;
					break;
				}

			}
		}
		if(i!=4)
			cout<<"####################"<<endl;
	}
	return 0;
}