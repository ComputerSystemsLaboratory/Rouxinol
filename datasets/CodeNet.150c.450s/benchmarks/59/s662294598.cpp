
#include <bits/stdc++.h>

using namespace std;

void print(vector<int> &A, int N){
    string sep = "";
    for(int i = 0; i < N; i++){
	cout << sep << A.at(i);
	sep = " ";
    }
    cout << endl;
}

void insertionSort(vector<int> &A, int N) // N個の要素を含む0-オリジンの配列A
{
    for(int i = 0; i < N; i++){ // i が 1 から N-1 まで
	int v = A.at(i);
	int j = i - 1;
	while(j >= 0 && A.at(j) > v){
	    A.at(j+1) = A.at(j);
	    A.at(j) = v;
	    j--;
	}
	print(A, N);
    }
}

int main(){
    int N;
    cin >> N;
    vector<int> A(N);

    for(int i = 0; i < N; i++){
	cin >> A.at(i);
    }

    insertionSort(A, N);
}

