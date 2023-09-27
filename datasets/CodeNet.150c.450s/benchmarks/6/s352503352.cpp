#include <bits/stdc++.h>
using namespace std;

#define FOR(i,start,end) for(int i=start; i<(int)(end); i++)
#define REP(i,n) FOR(i,0,n)
#define SIZE_OF_ARRAY(array)  (sizeof(array)/sizeof((array)[0]))

template<class T> void print(const T& value) { cout << value << "\n"; }

int main() {

    cin.tie(0);
    ios::sync_with_stdio(false);

    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if(x < y && y < z) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

