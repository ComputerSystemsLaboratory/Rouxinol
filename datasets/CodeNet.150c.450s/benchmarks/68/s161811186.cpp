#include <iostream>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	int n;
	vector<int> v(1000,0);
        int dis,diss;
	while(1){
		cin >> n;
		if( n == 0 ){
			break;
		}

		for(int i = 0; i < n;i++){
			cin >> v[i];
		}

		diss = 0;

		for(int i = 0;i < n;i++){
			for(int j = i+1;j < n;j++){
				if(v[i]-v[j] < 0){
					dis = v[j] - v[i];
				}else{
					dis = v[i] - v[j];
				}


				if( dis < diss || (i == 0 && j == 1)){
					diss = dis;
				}
			}
		}

		cout << diss << endl;
	}
}