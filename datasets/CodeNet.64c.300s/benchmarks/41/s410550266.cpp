#include<bits/stdc++.h>
using namespace std;
const int MAXH = 5e5+7;
typedef long long ll;
ll a[MAXH];
int h;
void maxHeap(int i) {
    int left = 2*i;
    int right = 2*i + 1;
    if(left > h) return;
    int mid = i;
    int largest_index = mid;
    if(a[left] > a[largest_index]) {
        largest_index = left;
    }
    if(right <= h && a[right] > a[largest_index]) {
        largest_index = right;
    }
    if(largest_index != mid) {
        swap(a[mid], a[largest_index]);
        maxHeap(largest_index);
    }
}
void buildMaxHeap() {
    int i;
    for(i = h/2; i >= 1; i--) {
        maxHeap(i);
    }
}
int main() {
    //freopen("in.txt", "r", stdin);

    scanf("%d", &h);

    for(int i = 1; i <= h; i++) {
        scanf("%lld", &a[i]);
    }
    buildMaxHeap();
    for(int i = 1; i <= h; i++){
        printf(" %lld", a[i]);
    }
    printf("\n");
    return 0;
}

