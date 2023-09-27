#include<iostream>
using namespace std;

int main(){
	int num[5];
	if( cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] ){
		for( int i=0;i<5;i++ ){
			for( int j=4;j>i;j-- ){
				if( num[j] <= num[j-1] ){
					int t = num[j];
					num[j] = num[j-1];
					num[j-1] = t;
				}
			}
		}
		cout << num[4] << " " << num[3] << " " << num[2] << " " << num[1] << " " << num[0] << endl;
	}
	return 0;
}