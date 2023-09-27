#include<iostream>
using namespace std;
int main(){
	int m, f, r;
	cin>>m>>f>>r;
	while(m!=-1 || f!=-1 || r!=-1){
		if(m==-1 || f==-1 || m+f<30) 		cout << "F\n";
		else if(80<=m+f)				cout << "A\n";
		else if(65<=m+f && m+f<80)		cout << "B\n";
		else if(50<=m+f && m+f<65)		cout << "C\n";
		else if(30<=m+f && m+f<50 && 50<=r)	cout << "C\n";
		else if(30<=m+f && m+f<50 && r<50)	cout << "D\n";
		cin>>m>>f>>r;
	}
	return 0;
}