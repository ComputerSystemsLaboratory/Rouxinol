#include <iostream>
#include <algorithm>

using namespace std;
const int INF = 1000000000;

int main(){
	while(true){
		int e;
		cin >> e;
		if(e == 0){ break; }
		int answer = INF;
		for(int z = 0; z * z * z <= e; ++z){
			for(int y = 0; z * z * z + y * y <= e; ++y){
				int x = e - y * y - z * z * z;
				answer = min(answer, x + y + z);
			}
		}
		cout << answer << endl;
	}
	return 0;
}