#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<climits>
#include<iostream>
#include<sstream>
#include<utility>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
#include<set>
#include<stack>
 
using namespace std;


int n, q = 0;
vector<int>A;
vector<int>M;

bool solve(int depth, int value);

bool solve(int depth, int value)
{
    if(depth == n) return (value == 0);

    if(solve(depth + 1, value)) return true;
    
    if(solve(depth + 1, value - A[depth])) return true;
    
    return false;
}


int main(void)
{
    //input
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int tmp;
        scanf("%d", &tmp);
        A.push_back(tmp);
    }
    scanf("%d", &q);
    for (int i = 0; i < q; ++i) {
        int tmp;
        scanf("%d", &tmp);
        M.push_back(tmp);
    }
    
    for (int i = 0; i < q; ++i) {
        if(solve(0, M[i])) cout << "yes" << endl;
        else            cout << "no" << endl;
    }
    
    return 0;
}