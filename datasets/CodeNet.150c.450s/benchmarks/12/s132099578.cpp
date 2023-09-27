#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <cstdio>
#include <algorithm>
#include <functional>
#include <map>

using namespace std;

#define MAX 252

int main() {
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);

    int heap[MAX];

    int H;scanf("%d",&H);
    for(int i=1;i<=H;i++){
        scanf("%d",&heap[i]);
    }

    for(int i=1;i<=H;i++){
        printf("node %d: ",i);
        printf("key = %d, ",heap[i]);
        if(i!=1){
            printf("parent key = %d, ",heap[i/2]);
        }
        if(i*2<=H){
            printf("left key = %d, ",heap[i*2]);
        }
        if(i*2+1<=H){
            printf("right key = %d, ",heap[i*2+1]);
        }
        printf("\n");
    }

    return 0;
}
