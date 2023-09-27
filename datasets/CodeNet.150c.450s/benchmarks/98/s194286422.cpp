#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n,m;
	while(cin >> n >> m && !(n == 0 && m == 0)){
		int taro[101];
		int hanako[101];

		int sumOfTaro=0;
		int sumOfHanako=0;
		for(int i = 0; i < n; i++){
			cin >> taro[i];
			sumOfTaro += taro[i];
		}
		for(int i = 0; i < m; i++){
			cin >> hanako[i];
			sumOfHanako += hanako[i];
		}
		bool b = false;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(sumOfTaro - taro[i] + hanako[j] == sumOfHanako - hanako[j] + taro[i]){
					cout << taro[i] << " " << hanako[j] << endl;
					b = true;
					break;
				}
			}
			if(b)
				break;
		}
		if(!b)
			cout << -1 << endl;
	}
	return 0;
}