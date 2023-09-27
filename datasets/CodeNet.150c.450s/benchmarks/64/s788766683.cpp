#include <bits/stdc++.h>
#include <tuple>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)
#define cube(x) (x) * (x) * (x)

const int INF = 1e9;

using namespace std;


bool solve(vector<int> a, int target){
    int last = a[a.size() - 1];
    if(last == target)
        return true;
    a.pop_back();
    if(a.empty())
        return false;
    return (solve(a, target-last) || solve(a, target));
}

int main() {
    int n, q, x;
    vector<int> a;
    scanf("%d", &n);
    REP(i, n){
        scanf("%d", &x);
        a.push_back(x);
    }
    scanf("%d", &q);
    REP(i, q){
        scanf("%d", &x);
        if(solve(a, x))
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}