#include<iostream>
using namespace std;
#include<stdio.h>

// Binary heap structure.
int *H;  // H[1], H[2], ... , H[n], H[n+1], H[n+2], ... , H[2n].

// keep on condition: H[x] = H[2x] + H[2x+1]. O(log(n)).
void add(int x, int y, int n)
{
    for(x += n, H[x] += y; x > 1; x >>= 1) // x >>= 1 means x /= 2.
        H[x >> 1] = H[x] + H[x ^ 1];       // x ^ 1: x = 2m then x + 1, x = 2m + 1 then x - 1.
    return;
}

// binary search. O(log(n)). very fast.
long long getSum(int x, int y, int n)
{
    long long sum = 0; // x, y starts from leaf, usually.

    for(x += n, y += n; y > x + 1; x = ((x + 1) >> 1), y = ((y - 1) >> 1)){
        if(x & 1){ sum += H[x]; }
        if(!(y & 1)){ sum += H[y]; }
    }
    if(x == y){ sum += H[x]; }else{ sum += H[x] + H[y]; }
    return sum;
}

int main()
{
    H = new int [1 << 18];
    int n, q;
    scanf("%d %d", &n, &q);
    int cmd, x, y;

    fill(H, H + 2 * n + 1, 0);

    while(q){
        scanf("%d %d %d", &cmd, &x, &y);
        if(cmd){
            printf("%lld\n", getSum(x, y, n));
        }else{
            add(x, y, n);
        }
        q--;
    };
    delete [] H;
    return 0;
}