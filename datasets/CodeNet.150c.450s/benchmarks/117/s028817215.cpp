#include<iostream>
#include<stack>
#include<cstdlib>
#include<string>
#include <utility>
#include<queue>
#include<algorithm>

using namespace std;
#define MAX 500000
#define SENTI 2000000000
int cnt;

void merge(vector<int>&S, int left, int mid, int right) {

	int i = 0;
	int j = 0;
	int n1 = mid - left;
	int n2 = right - mid;
	vector<int> R;
	vector<int> L;

	for (int i = 0; i<n1; i++) {
		L.push_back( S[left+i]);
	}
	for (int i = 0; i<n2; i++) {
		R.push_back ( S[mid+i]);
	}

	L.push_back(SENTI);
	R.push_back(SENTI);

	for (int k = left; k<right; k++) {
		cnt++;
		if (L[i] <= R[j]) {
			S[k] = L[i];
			i++;
		}
		else {
			S[k] = R[j];
			j++;
		}
	}
	//for (int i = 0; i<S.size(); i++) {
		//cout << S[i]<<" ";
	//}
	//cout << endl;
	

}

void mergesort(vector<int>&S, int left, int right) {
	int mid = 0;
	if (left + 1<right) {
		mid = (right + left) / 2;
		mergesort(S, left, mid);
		mergesort(S, mid, right);
		merge(S, left, mid, right);
	}

}

int main() {

	int n = 0;
	int num = 0;
	cin >> n;
	vector<int> S;

	for (int i = 0; i<n; i++) {
		cin >> num;
		S.push_back(num);
	}

	mergesort(S, 0, n);

	for (int i = 0; i<n; i++) {
		if (i != 0)cout << " ";
		cout << S[i]  ;
	}
	cout << endl;

	cout << cnt;

	cout << endl;
	return 0;
}
