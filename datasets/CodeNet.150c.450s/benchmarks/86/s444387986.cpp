#include<iostream>

using namespace std;

int main(){
	int n,m,p;
	int ans;

	while(true){
		cin >> n >> m >> p;
		if(n == 0 && m == 0 && p == 0){
			break;
		}
		int* data = new int[n];
		int count = 0;
		for(int i=0;i<n;i++){
			cin >> data[i];
			count += data[i];
		}

		ans = 100 * count - p * count;

		if(data[m-1]==0){
			ans = 0;
		}else{
			ans /= data[m-1];
		}

		cout << ans << endl;
	}
}