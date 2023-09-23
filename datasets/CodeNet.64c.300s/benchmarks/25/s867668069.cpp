#include<iostream>
using namespace std;

int main(){
	int a[4];
	int b[4];
	while(cin >> a[0]){
		for(int i=1;i<4;i++){
			cin >> a[i];
		}
		for(int i=0;i<4;i++){
			cin >> b[i];
		}

		int count[2]={0};
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(i==j && a[i] == b[j]){
					count[0]++;
				}
				if(i!=j && a[i] == b[j]){
					count[1]++;
				}
			}
		}
		cout << count[0] << " " << count[1] << endl;
	}
}