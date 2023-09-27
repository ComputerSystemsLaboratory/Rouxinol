#include <iostream>
#include <vector>
#include <limits>
using namespace std;

struct TCard{
	int Number;
	char Mark;
};

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

void merge(vector<TCard> &A, int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    vector<TCard> L, R;
    L.resize(n1 + 1);
    R.resize(n2 + 1);
    for(int i = 0; i < n1; i++){
        L[i] = A[left + i];
    }
    for(int i = 0; i < n2; i++){
        R[i] = A[mid + i];
    }
    L[n1].Number = numeric_limits<int>::max();
    R[n2].Number = numeric_limits<int>::max();
    int i = 0;
    int j = 0;
    for(int k = left; k < right; k++){
        if(L[i].Number <= R[j].Number){
            A[k] = L[i];
            i = i + 1;
        }else{
            A[k] = R[j];
            j = j + 1;
        }
    }
}
  
void mergeSort(vector<TCard> &A, int left, int right)
{
    if(left+1 >= right){
        return;
    }
    int mid = (left + right)/2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
}


bool IsStable(const vector<TCard>& A, const vector<TCard>& B)
{
	for(int i = 0; i < A.size(); i++){
		if(A[i].Mark != B[i].Mark){
		    return false; 
		}
	}
	return true;
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
	mergeSort(B, 0, n);
	QuickSort(A, 0, n-1);
	if(IsStable(A, B)){
		cout << "Stable" << endl;
	}else{
		cout << "Not stable" << endl;
	}
	for(int i = 0; i < n; i++){
		cout << A[i].Mark << ' ' << A[i].Number << endl;
	}
	return 0;
}