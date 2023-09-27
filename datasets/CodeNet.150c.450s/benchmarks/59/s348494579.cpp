#include <cstdio>
#include <iostream>
using namespace std;

void i_sort(int *ary, int len)
{
    for(int k=0;k < len;++k) {
        if (k == len-1) {printf("%d\n", ary[k]);break;}
        printf("%d ", ary[k]);
    }

    for(int i=1;i < len;++i) {
        int key = ary[i];
        int j = i - 1;
        while (j >= 0 && ary[j] > key) {
            ary[j+1] = ary[j];
            --j;
        }
        
        ary[j+1] = key;
        
        for(int k=0;k < len;++k) {
            if (k == len-1) {printf("%d\n", ary[k]);break;}
            printf("%d ", ary[k]);
        }
    }
}

int main()
{
    int n; cin >> n;
    int ary[n];
    for(int i=0;i < n;++i) cin >> ary[i];
    
    i_sort(ary, sizeof(ary)/sizeof(ary[0]));

    return 0;
}