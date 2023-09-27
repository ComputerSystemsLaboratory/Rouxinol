#include <iostream>
#include <vector>
#include <algorithm>
#define MAXVALUE 10000
#define rep(i,a) for(i=0;i<a;i++)
using namespace std;

void CountingSort(vector<int> &A, vector<int> &B, int k){
    int i,j;
    vector<int> C(k+1,0);

    for(j=0; j<A.size(); j++) {
        C[A[j]]++;
    }
    for(i=1; i<=k; i++) {
        C[i] = C[i] + C[i-1];
    }
    for(j=A.size()-1; j>=0; j--){
        B[C[A[j]]-1] = A[j];
        C[A[j]]--;
    }
}

int main(void) {
    vector<int> A;
    vector<int> B;
    int i,n,num;

    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> num;
        A.push_back(num);
    }
    B.resize(n);
    CountingSort(A,B,*max_element(A.begin(),A.end()));

    rep(i,n){
        cout << B[i];
	if(i != n-1) {
	  cout << " ";
	} else {
	  continue;
	}
    }
    cout << endl;
    return 0;
}