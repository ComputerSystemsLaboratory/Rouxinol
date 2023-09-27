#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<math.h>
#include<string>
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e8;
using namespace std;

int main(void)
{
    
    string a, b;
    cin >> a >> b;
    int n = a.length() + 1;
    int m = b.length() + 1;
    vector<vector<int> >v(n, vector<int>(m));
    for(int i=0; i< n; i++){
        for(int j=0; j< m; j++){
            if(j == 0){
                v[i][j] = i;
            }
            else if(i == 0) {
                v[i][j] = j;
            }

        }
    }

    for(int i=1; i < n; i++){
        for(int j=1; j < m; j++){
            int tmp_a = v[i-1][j] + 1;
            int tmp_b = v[i][j-1] + 1;
            int tmp_c;
            if(a[i-1] == b[j-1]){
                tmp_c = v[i-1][j-1];
            }else{
                tmp_c = v[i-1][j-1] + 1;
            }
            v[i][j] = min(tmp_a, min(tmp_b, tmp_c));
        }
    }

    cout << v[n-1][m-1] << endl;

    // for(int i=0; i<n; i++){
    //     for(int j =0; j<m; j++){
    //         cout << v[i][j];
    //     }
    //     cout << endl;
    // }
}

