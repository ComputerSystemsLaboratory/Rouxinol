#include<iostream>
using namespace std;
int main(){
	int count,infon,tou,kai,heya,hito;
	int info[4][3][10]={{0},{0},{0}};
	cin>>infon;
	for(count=0;count<infon;count++){
		cin>>tou>>kai>>heya>>hito;
		info[tou-1][kai-1][heya-1]+=hito;
	}
	for(tou=1;tou<=4;tou++){
		for(kai=1;kai<=3;kai++){
			for(heya=1;heya<=10;heya++){
				cout<<' '<<info[tou-1][kai-1][heya-1];
			}
			cout<<endl;
		}
		if(tou!=4){
			cout<<"####################"<<endl;
		}
	}
}