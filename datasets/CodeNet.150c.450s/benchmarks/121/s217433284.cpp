#include <iostream>
using namespace std;
char F[102][102];
void DFSMI(int Y,int X){
	if(F[Y][X]!='@')
		return;
	F[Y][X]='.';
	DFSMI(Y-1,X);
	DFSMI(Y,X+1);
	DFSMI(Y+1,X);
	DFSMI(Y,X-1);
}
void DFSRI(int Y,int X){
	if(F[Y][X]!='#')
		return;
	F[Y][X]='.';
	DFSRI(Y-1,X);
	DFSRI(Y,X+1);
	DFSRI(Y+1,X);
	DFSRI(Y,X-1);
}
void DFSKA(int Y,int X){
	if(F[Y][X]!='*')
		return;
	F[Y][X]='.';
	DFSKA(Y-1,X);
	DFSKA(Y,X+1);
	DFSKA(Y+1,X);
	DFSKA(Y,X-1);
}

int main(){
while(1){
	int count=0;
	int H,W;
	cin>>H;
	if(H==0)
		count++;
	cin>>W;
	if(W==0)
		count++;
	if(count==2)
		return 0;
	for(int y=1;y<=H;y++){
		for(int x=1;x<=W;x++){
			cin>>F[y][x];
			
		}
	}
	int cnt=0;
	for(int y=1;y<=H;y++)
		for(int x=1;x<=W;x++){
			if(F[y][x]=='@'){
				cnt++;
				DFSMI(y,x);
			}
			else if(F[y][x]=='#'){
				cnt++;
				DFSRI(y,x);
			}
			else if(F[y][x]=='*'){
				cnt++;
				DFSKA(y,x);
			}
		}
	cout<<cnt<<endl;
	}
return 0;
}