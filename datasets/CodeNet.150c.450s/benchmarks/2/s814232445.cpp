#include <bits/stdc++.h>
using namespace std;
typedef long long llong;
#define MAX 200000

int Partition(vector<int>& vec_A, int p, int r)
{
    int x = vec_A[r];
    int i = p - 1;
    int tmp = 0;
    for (int j = p; j < r; j++)
    {
        if (vec_A[j] <= x) {
            i++;
            tmp = vec_A[i];
            vec_A[i] = vec_A[j];
            vec_A[j] = tmp;
        }
    }
    tmp = vec_A[i+1];
    vec_A[i+1] = vec_A[r];
    vec_A[r] = tmp;
    return i+1;
}

int main() {
    vector<int> vec;
    vec.reserve(MAX);
    int n = 0;
    int m = 0;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&m);
        vec.push_back(m);
    }

    int idx = 0;
    idx = Partition(vec, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            printf("%d\n", vec[i]);
        } else if (i == idx) {
            printf("[%d] ", vec[i]);
        }
        else
        {
            printf("%d ", vec[i]);
        }
    }
}
