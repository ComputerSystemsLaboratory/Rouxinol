#include <iostream>
#include <vector>
using namespace std;

int cnt = 0;

void bubblesort(vector<int> &A){
    bool flag = true;
    while(flag){
        flag = false;
        for(int j=A.size()-1; j>0; --j){
            if(A[j] < A[j-1]){
                cnt++;
                swap(A[j], A[j-1]);
                flag =true;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> A(n,0);
    for(auto&& x: A){
        cin >> x;
    }
    bubblesort(A);

    for(int i=0; i<n; ++i){
        if( i!= 0)
            cout << ' ';
        cout << A[i];
    }
    cout << endl;
    cout << cnt << endl;
}
