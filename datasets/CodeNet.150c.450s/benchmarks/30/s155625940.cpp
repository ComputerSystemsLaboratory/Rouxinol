#include <bits/stdc++.h>

using namespace std;

int selectionSort(vector<int>& A, int N) // N個の要素を含む0-オリジンの配列A
{
    int sum = 0;
    for(int i = 0; i < N; i++){
	int minj = i;
	for(int j = i; j < N; j++){
	    if(A.at(j) < A.at(minj)){
		minj = j;
	    }
	}
	if(i != minj) sum++;
	swap(A.at(i), A.at(minj));
    }
    return sum;
}

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
	cin >> A.at(i);
    }
    int n = selectionSort(A, N);
    string sep = "";
    for(int a: A){
	cout << sep << a;
	sep = " ";
    }
    cout << endl << n << endl;
}

