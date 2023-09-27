


#include<iostream>

using namespace std;

int main(){
	int num; cin >> num;
	int n = num;

	int r[n]; cin >> r[0];
	int minv = r[0];
	int maxpro = -1000000001;
	for(int i=1;i<n;i++){
		cin >> r[i];
		maxpro = max(maxpro,r[i]-minv);
		minv = min(minv,r[i]);
	}

	cout << maxpro << endl;
	return 0;
}