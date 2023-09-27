#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int r[3];
		cin >> r[0] >> r[1] >> r[2];
		sort(r, r+3);
		if(r[0]*r[0]+r[1]*r[1]==r[2]*r[2]){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}

	}
}