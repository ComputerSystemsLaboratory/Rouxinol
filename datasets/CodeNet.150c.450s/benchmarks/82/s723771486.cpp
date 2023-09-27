#include <bits/stdc++.h>
using namespace std;

class Dice{
public:
	int d[6];
	int dcopy[6];
	void MoveN();
	void MoveS();
	void MoveE();
	void MoveW();
};

void Dice::MoveN(){
	swap(d[0],d[1]);
	swap(d[1],d[4]);
	swap(d[1],d[5]);
}
void Dice::MoveS(){
	swap(d[0],d[1]);
	swap(d[0],d[4]);
	swap(d[4],d[5]);
}
void Dice::MoveE(){
	swap(d[0],d[3]);
	swap(d[2],d[3]);
	swap(d[3],d[5]);
}
void Dice::MoveW(){
	swap(d[0],d[2]);
	swap(d[2],d[3]);
	swap(d[2],d[5]);
}
int main(){
	int n,a,b;
	Dice dc;
	for(int i=0;i<6;i++){
		cin>>dc.d[i];
	}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		while(dc.d[0]!=a){
			for(int i=0;i<3;i++){
				if(dc.d[0]==a) break;
				dc.MoveN();
			}
			if(dc.d[0]==a) continue;
			dc.MoveE();
		}
		if(dc.d[1]==b) cout<<dc.d[2]<<endl;
		else if(dc.d[2]==b) cout<<dc.d[4]<<endl;
		else if(dc.d[3]==b) cout<<dc.d[1]<<endl;
		else if(dc.d[4]==b) cout<<dc.d[3]<<endl;
	}
	return 0;
}
