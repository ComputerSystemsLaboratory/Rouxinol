#include <bits/stdc++.h>
using namespace std;

char seiseki(int m,int f,int r){
	if(m==-1||f==-1||m+f<30) return 'F';
	if(m+f>=80) return 'A';
	if(m+f>=65) return 'B';
	if(max(m+f,r)>=50) return 'C';
	return 'D';
}

int main(){
	int i,m=0,f=0,r=0;
	char c[10000];
	for(i=0;;i++){
		cin>>m>>f>>r;
		if(m+f+r==-3) break;
		c[i]=seiseki(m,f,r);
	}
	for(int j=0;j<i;j++) cout<<c[j]<<endl;
	return 0;
}

