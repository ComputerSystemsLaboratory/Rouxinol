#include<stdio.h>
#include<string>
#include<iostream>

void max_heapify(int* A, int i, int H)
{
    int l = 2 * i, r = 2 * i + 1;
    if(l > H && r > H) return;
    int maxid = i;
    if(l <= H){ if(A[l] > A[maxid]) maxid = l; }
    if(r <= H){ if(A[r] > A[maxid]) maxid = r; }
    if(maxid == i) return;
    std::swap(A[maxid], A[i]);
    max_heapify(A, maxid, H);
}

int main()
{
    int A[2000001];
    int i, H, key;
    char cmd[8];
    scanf("%d", &H);
    for(i = 1; i <= H; i++) scanf("%d", &A[i]);
    H = 0;

    while(1){
        scanf("%s", cmd);  
        if(cmd[2] == 'd') break;  // end.
        if(cmd[0] == 'e'){  // extract.
            if(H == 0) continue;
            printf("%d\n", A[1]);
            A[1] = A[H]; H--;
            if(H > 0) max_heapify(A, 1, H);
        }else{
            scanf("%d", &key); // H++;   // insert key.
            i = ++H;
            while(i > 1){
                if(A[i / 2] > key) break;
                A[i] = A[i / 2];
                i /= 2;
            };
            A[i] = key;
        }
    };
    return 0;
}