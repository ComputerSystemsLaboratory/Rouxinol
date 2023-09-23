#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<string>
#include<utility>
#include<algorithm>
#include<stack>
#include<queue>

#define numof(array) (sizeof (array) / sizeof *(array))
using namespace std;

int A[10] = {};
int B[10] = {0};
int C[10] = {0};



bool check(void)
{
    for (int i = 1; B[i] != 0; i++) {
        if (B[i-1] > B[i]) return false;
    } 
    
    for (int i = 1; C[i] != 0; i++) {
        if (C[i-1] > C[i]) return false;
    } 

    return true;
}

bool dfs(int i, int b)
{
    if (i == 10) return check();

    //Bにいれる
    B[b] = A[i];
    if (dfs(i+1, b+1)) return true;
    B[b] = 0;

    //Cに入れる
    C[i-b] = A[i];
    if (dfs(i+1, b)) return true; 
    C[i-b] = 0;

    return false;
}

int main(void)
{
    int N;
    cin >> N;
    while (N--) {
        for (int i = 0; i < 10; i++) {
            cin >> A[i];
        }    
        if (dfs(0,0)) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
	return 0;
}