#include <bits/stdc++.h>
using namespace std;
#define VMAX 10000

int main(){
    int n;
    cin >> n;
    vector<unsigned short> A(2000000+1);
    vector<unsigned short> B(2000000+1);
    vector<int> c(VMAX + 1);
    for(int i = 0;i <= VMAX ;i++){
        c.at(i) = 0;
    }

    for(int i = 0;i<n;i++){
        cin >> A.at(i+1);
        c.at(A.at(i+1))++;
    }

    for(int i = 1; i<=VMAX;i++) c.at(i) = c.at(i) + c.at(i-1);

    for(int j = 1;j <= n;j++){
        B.at(c.at(A.at(j))) = A.at(j);
        c.at(A.at(j))--;
    }

    for(int i = 1; i <= n; i++){
        if(i>1) cout << " ";
        cout << B.at(i);
    }

    cout << endl;

    return 0;
}
