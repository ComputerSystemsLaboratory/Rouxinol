#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	int days[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	string youbi[7]={"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};
	while(1){
		int m,d,s=0;
		cin >> m >> d;
		if(!m&&!d)	break;
		for(int i=0;i<m-1;i++)	s+=days[i];
		s+=d;
		cout << youbi[(s-1)%7] << endl;
	}
	return 0;
}
