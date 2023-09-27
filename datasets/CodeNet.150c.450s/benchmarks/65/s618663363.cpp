#include <bits/stdc++.h>

using namespace std;

bool bubbleSort(vector<pair<char,int>>& A, int N) // N 個の要素を含む 0-オリジンの配列 A
{
    bool flag = true; // 逆の隣接要素が存在する
    while(flag){
	flag = false;
	for(int j = N-1; j >= 1; j--){ // j が N-1 から 1 まで
	    if(A.at(j).second < A.at(j-1).second){
		// A[j] と A[j-1] を交換
		swap(A.at(j), A.at(j-1));
		flag = true;
	    }
	}
    }
    return true;
}

bool selectionSort(vector<pair<char,int>>& A, int N) // N個の要素を含む0-オリジンの配列A
{
    for(int i = 0; i < N; i++){
	int minj = i;
	for(int j = i; j < N; j++){
	    if(A.at(j).second < A.at(minj).second){
		minj = j;
	    }
	}
	swap(A.at(i), A.at(minj));
    }
    return true;
}

bool is_stable(vector<pair<pair<char,int>,int>>& O, vector<pair<char,int>>& A){
    for(int i = 0; i < A.size(); i++){
	int o0 = 0, o1 = 0;
	for(int j = i+1; j < A.size(); j++){
	    if(A.at(i).second == A.at(j).second){
		int a, b;
		for(int k = 0; k < O.size(); k++){
		    if(O.at(k).first.first == A.at(i).first && O.at(k).first.second == A.at(i).second){
			a = O.at(k).second;
			break;
		    }
		}
		for(int k = 0; k < O.size(); k++){
		    if(O.at(k).first.first == A.at(j).first && O.at(k).first.second == A.at(j).second){
			b = O.at(k).second;
			break;
		    }
		}
		if(a > b) return false;
	    }
	}
    }
    return true;
}


int main()
{
    int N;
    cin >> N;
    vector<pair<pair<char,int>,int>> O(N, pair<pair<char,int>,int>(pair<char,int>(0,0),0));
    vector<pair<char,int>> A(N, pair<char,int>(0,0));
    vector<pair<char,int>> B(N, pair<char,int>(0,0));
    for(int i = 0; i < N; i++){
	cin >> A.at(i).first >> A.at(i).second;
	B.at(i).first = A.at(i).first;
	B.at(i).second = A.at(i).second;
	O.at(i).first.first = A.at(i).first;
	O.at(i).first.second = A.at(i).second;
	O.at(i).second = i;
    }
    bubbleSort(A, N);
    selectionSort(B, N);
    
    string sep;
    sep = "";
    for(pair<int,int> a: A){
	cout << sep << (char)a.first << a.second;
	sep = " ";
    }
    cout << endl;
    if(is_stable(O, A)){
	cout << "Stable" << endl;
    }else{
	cout << "Not stable" << endl;
    }
    sep = "";
    for(pair<int,int> b: B){
	cout << sep << (char)b.first << b.second;
	sep = " ";
    }
    cout << endl;
    if(is_stable(O, B)){
	cout << "Stable" << endl;
    }else{
	cout << "Not stable" << endl;
    }
}

