#include <iostream>
#include <cmath>
using namespace std;

int s;

void com(int c,int p[100],int a,int b){
	if(c==a){
		int m = 0;
		for(int i=1;i<=a;i++) m += p[i];
		if(b==m) s++;
	}
	else{
		for(int i=p[c]+1;i<=min(9,b-p[c]);i++){
			p[c+1] = i;
			com(c+1,p,a,b);
		}
	}
}

int main(){
	int a,b;
	while(1){
		cin >> a >> b;
		if(a+b==0) break;
		s = 0;
		int p[100];
		p[0] = -1;
		com(0,p,a,b);
		cout << s << endl;
	}
}