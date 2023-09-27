#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

int main(){
    long long n, m, l, sum;
    cin >> n >> m >> l;
    vector<vector<long>> a;
    a = vector<vector<long>>(100,vector<long>(100));
    vector<vector<long>> b;
    b = vector<vector<long>>(100,vector<long>(100));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<l; j++){
            cin >> b[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<l; j++){
            sum = 0;
            for(int h=0; h<m; h++){
                sum += a[i][h]*b[h][j];
                if(h==m-1){
                    if(j==l-1){
                        cout << sum << endl;
                        break;
                    }
                    cout << sum << " ";
                }
            }
        }
    }


    return 0;
}

