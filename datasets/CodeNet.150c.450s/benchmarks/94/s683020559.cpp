#include <bits/stdc++.h>

using namespace std;

int bubbleSort(vector<int>& A, int N) // N 個の要素を含む 0-オリジンの配列 A
{
    bool flag = true; // 逆の隣接要素が存在する
    int sum = 0;
    while(flag){
	flag = false;
	for(int j = N-1; j >= 1; j--){ // j が N-1 から 1 まで
	    if(A.at(j) < A.at(j-1)){
		// A[j] と A[j-1] を交換
		swap(A.at(j), A.at(j-1));
		sum++;
		flag = true;
	    }
	}
    }
    return sum;
}

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    
    for(int i = 0; i < N; i++){
	cin >> A.at(i);
    }
    
    int n = bubbleSort(A, N);

    string sep = "";
    for(int i = 0; i < N; i++){
	cout << sep << A.at(i);
	sep = " ";
    }
    cout << endl;
    cout << n << endl;
}

