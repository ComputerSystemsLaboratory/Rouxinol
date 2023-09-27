#include<iostream>
using namespace std;
const int MAX=30;
int main(){
	bool student[MAX+2];
	int n;
	for(int i=1; i<=30; i++) student[i]=false;
	for(int i=1;i<=28;i++){
		cin >> n;
		student[n]=true;
	}
	for(int i=1; i<=30; i++)
		if(student[i]==false) cout << i << endl;
	return 0;
}