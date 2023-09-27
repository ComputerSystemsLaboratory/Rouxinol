#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <map>
#include <deque>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <unordered_map>



using namespace std;

static const int N = 100;
int A[N+1][N+1];

int main(){
    
    for (int i=0;i<=N;i++){
        A[i][0] = 0;
    }
    for (int j = 0;j<=N;j++){
        A[0][j] = 0;
    }
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        int p,k;
        cin >> p >> k;
        for (int j=0;j<k;j++){
            int a;
            cin >> a;
            A[i][a] = 1;
           
        }
    }

    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if(j-1){
                cout << " ";
            }
            cout << A[i][j];
        }
        cout << endl;
    }
}
