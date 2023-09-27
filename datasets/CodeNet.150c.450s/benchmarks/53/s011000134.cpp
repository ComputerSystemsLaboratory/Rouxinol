#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int n; cin >> n;
	int n1 = n;
	vector<int> di(0);
	int flag = 1;
	for (int i=2;i<sqrt(n)+1;i++){
		while (n % i == 0){
			n = n / i;
			di.push_back(i);
			flag = 1;
		}
	}
	if (n != 1) di.push_back(n);
	cout << n1 << ": ";
	for (int i=0;i<di.size();i++){
		if (i != di.size()-1) cout << di[i] << " ";
		else cout << di[i] << endl;
	}

	return 0;
}


