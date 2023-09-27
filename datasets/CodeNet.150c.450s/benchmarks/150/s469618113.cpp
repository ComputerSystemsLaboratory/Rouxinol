#include <iostream>
#include <vector>

using namespace std;

int main() {
    int i,j,buf;
    int k=2000000;
    int n;
    vector<int> A,B,C;
    
    cin >> n;
	for(i=0;i<n;i++){
		//cin >> A[i]; //?buf使わなくていいの？ ->使わなきゃダメだったエラー[vector subscript out of range]
		cin >> buf;
		A.push_back(buf);
	}
    
    for(i=0;i<k;i++){C.push_back(0);}

	for(i=0;i<n;i++){
		C[A[i]]++;
	}

    for(i=1;i<k;i++){C[i]+=C[i-1];}

	for(i=0;i<n;i++){B.push_back(0);} //最初にBに要素（配列）を全部確保しておいちゃう
	for(i=n-1;i>=0;i--){
		B[C[A[i]]-1] = A[i]; 
		C[A[i]]--;
	}

	//出力
	for(i=0;i<n-1;i++){ cout << B[i] << " "; }
	cout << B[n-1] << endl;
	
	return 0;
}