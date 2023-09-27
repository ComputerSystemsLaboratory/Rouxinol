/*
「pivotを中間に、大きいものと小さいものを交換していく」
という感じではなく、
「pivotより小さいものを探して、前の方に詰めていく（添え字iのとこ）」
という感じである。

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int i,j;
    int n;
    int buf;
    int p,q,r,pivot;
    vector<int> A;
    
    cin >> n;
    for(i=0;i<n;i++){
        cin >> buf;
        A.push_back(buf);
    }
    
	p=0;
	r=n-1;
	//Partition(A, p, r);
    pivot = A[r];
	i=p-1;
	for(j=p; j<r; j++){
		if(A[j]<=pivot) {
			i++;
			swap(A[i],A[j]);
		}
	}
	swap(A[i+1],A[r]);
	q=i+1; //return i+1;

    
    //出力
    for(i=0;i<n;i++){
        if(i==q) cout << "[" << A[i] << "]" ;
        else cout << A[i];
        
        if(i==n-1) cout << endl;
        else cout << " ";
    }
    
	return 0;
}