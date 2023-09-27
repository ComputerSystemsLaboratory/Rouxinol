#include <iostream>
#include <cstdio>
using namespace std;

char m[100][100];
int h,w;
int a;

void walk(int i,int j){
	char c=m[i][j];
	m[i][j]='1';
	if(i+1<h&&m[i+1][j]==c)walk(i+1,j);
	if(i-1>=0&&m[i-1][j]==c)walk(i-1,j);
	if(j+1<w&&m[i][j+1]==c)walk(i,j+1);
	if(j-1>=0&&m[i][j-1]==c)walk(i,j-1);
}

int main(void){
	while(cin>>h>>w,h||w){
		for(int i=0;i<h;i++){
			scanf("%s",m[i]);
		}
		a=0;

		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(m[i][j]!='1'){
					a++;
					walk(i,j);
				}
			}
		}
		cout<<a<<endl;
	}
}