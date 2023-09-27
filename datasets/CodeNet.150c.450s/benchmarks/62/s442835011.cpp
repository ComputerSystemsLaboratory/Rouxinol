#include<iostream>
using namespace std;

int main(){
	int x[3];
	cin >> x[0] >> x[1] >> x[2];
	int i,j,tmp;
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if(x[i] > x[j]){
				tmp = x[i];
				x[i]= x[j];
				x[j]= tmp;
			}
		}
	}
	cout << x[0] << ' ' << x[1] << ' ' << x[2] << endl;
	return 0;
}