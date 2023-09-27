#include <iostream>
using namespace std;
int cnt,w,h;
string s[21];
void check(int i,int j){
	if(s[i][j]=='#')return;
	cnt++;
	s[i][j]='#';
	if(i>0)check(i-1,j);
	if(i<h-1)check(i+1,j);
	if(j>0)check(i,j-1);
	if(j<w-1)check(i,j+1);
}


int main(){
	while(1){
		cin >>w >>h;
		if(!(w||h))break;
		for(int i=0;i<h;i++){
			cin >>s[i];
		}
		cnt=0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(s[i][j]=='@')check(i,j);
			}
		}
	cout << cnt<<endl; 

	}
}