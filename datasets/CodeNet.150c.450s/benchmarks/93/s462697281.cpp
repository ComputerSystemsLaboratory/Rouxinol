#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct TCard{
	int Number;
	char Mark;
    bool operator<(const TCard &Y) const;
    bool operator==(const TCard &Y) const;	
};

bool TCard::operator<(const TCard &Y) const
{
	return Number < Y.Number;
}

bool TCard::operator==(const TCard &Y) const
{
	return Mark == Y.Mark;
}

int Partition(vector<TCard>& A, int p, int r)
{
	int i = p-1;
	for(int j = p; j < r; j++){
		if(A[j].Number <= A[r].Number){
			i++;
			swap(A[i], A[j]);
		}
	}
	swap(A[i+1], A[r]);
	return i+1;
}

void QuickSort(vector<TCard>& A, int p, int r){
	if(p < r){
		int q = Partition(A, p, r);
		QuickSort(A, p, q-1);
		QuickSort(A, q+1, r);
	}
}

int main()
{
	int n;
	cin >> n;
	vector<TCard> A(n);
	for(int i = 0; i < n; i++){
		cin >> A[i].Mark >> A[i].Number;
	}
	vector<TCard> B = A;
	std::stable_sort(B.begin(), B.end());
	QuickSort(A, 0, n-1);
	if(A == B){
		cout << "Stable" << endl;
	}else{
		cout << "Not stable" << endl;
	}
	for(int i = 0; i < n; i++){
		cout << A[i].Mark << ' ' << A[i].Number << endl;
	}
	return 0;
}