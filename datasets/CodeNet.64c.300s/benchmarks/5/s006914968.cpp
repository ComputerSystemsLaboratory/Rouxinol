#include<iostream>
using namespace std;
int main(){
	int m[10];
	int i,j;
	for(i=0;i<10;i++){
		cin >> m[i];
	}
	int tmp;
	for(i=0;i<9;i++){
		for(j=i+1;j<10;j++){
			if(m[i] <= m[j]){
				tmp = m[i];
				m[i] = m[j];
				m[j] = tmp;
			}
		}
	}
	for(i=0;i<3;i++)
		cout << m[i] << endl;
	return 0;
}