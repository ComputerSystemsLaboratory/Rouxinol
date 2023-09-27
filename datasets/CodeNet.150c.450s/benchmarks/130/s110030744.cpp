#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int> > mtr(n, vector<int>(m));
    vector<int> vec(m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mtr[i][j];
        }
    }
    for(int i=0; i<m; i++){
        cin >> vec[i];
    }

    for(int i=0; i<n; i++){
        int ret=0;
        for(int j=0; j<m; j++){
            ret += mtr[i][j]*vec[j];
        }
        cout << ret << endl;
    }
    return 0;
}

