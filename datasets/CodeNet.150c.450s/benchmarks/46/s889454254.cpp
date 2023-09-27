#include <iostream>
using namespace std;
int main(){
	int n, x, sum;
	while(1){
		cin >> n >> x;
		if (n == 0 && x == 0) break;
		sum = 0;
		for (int i = 1; i <= n ; i++){
			for (int j = i + 1; j <= n ; j++){
			    int k = x - i - j;
                if(k <= n && k > j) sum++;
			}
		}
        cout << sum << endl;
	}
	
	return 0;
}

