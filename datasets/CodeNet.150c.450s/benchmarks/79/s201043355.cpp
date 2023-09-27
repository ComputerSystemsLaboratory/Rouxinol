#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>
#include <array>

using namespace std;

int A[51];
int n,m,p,c;

int main(){
    while(true){
        cin >> n >> m;
        if(n+m == 0)break;
        for(int i = 0;i < n;i++)A[i] = n - i;
        for(int i = 0;i < m;i++){
            cin >> p >> c;
            rotate(A,A+p-1,A+p+c-1);
//            for(int k = 0;k < n;k++){
//                cout << A[k] << " ";
//            }
//            cout << endl;
        }
        cout << A[0] << endl;
    }
}