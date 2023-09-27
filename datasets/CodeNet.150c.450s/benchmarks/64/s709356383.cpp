#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

bool func(int m, vector<int> &A, int n)
{
    if(n<0){
        return false;
    } else{
        return m-A[n]==0 || func(m-A[n], A, n-1) || func(m, A, n-1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> A(n);
    for(auto it=A.begin(); it!=A.end(); it++){
        scanf("%d", &(*it));
    }
    sort(A.begin(), A.end());

    int q;
    scanf("%d", &q);
    for(; q; q--){
        int m;
        scanf("%d", &m);
        bool flag=func(m, A, n-1);
        if(flag){
            printf("yes\n");
        } else{
            printf("no\n");
        }
    }
    return 0;
}