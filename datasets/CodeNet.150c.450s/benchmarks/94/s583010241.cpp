#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

void printIntInLine(vector<int> &arr) {
	for(vector<int>::iterator itr=arr.begin(); itr!=--(arr.end()); ++itr) {
		printf("%d ", *itr);
	}
	printf("%d\n", *(--(arr.end())));
}

int main() {
	vector<int> arr;
	int n, tmp, nSwap;

	scanf("%d", &n);
	for(int i=0; i<n; ++i) {
		scanf("%d", &tmp);
		arr.push_back(tmp);
	}

	nSwap = 0;

	for(vector<int>::iterator itr1=arr.begin(); itr1!=arr.end(); ++itr1) {
		for(vector<int>::iterator itr2=--arr.end(); itr2!=itr1; --itr2) {
			if((*itr2)<(*(itr2-1))) {
				swap(*itr2, *(itr2-1));
				++nSwap;
			}
		}
	}

	printIntInLine(arr);
	printf("%d\n", nSwap);
}