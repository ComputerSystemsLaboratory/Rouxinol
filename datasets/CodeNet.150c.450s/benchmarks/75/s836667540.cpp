#include <iostream>
using ll = long long;
using namespace std;

/* initialize */
auto p = [](int i) -> int {return i/2;};
auto l = [](int i) -> int{return 2 *i;};
auto r = [](int i) -> int{return 2*i+1;};
int H, A[500001];
void maxheapify(int i){
    int largest,temp;
    int le=l(i), ri=r(i);
    if (le <= H && A[le] > A[i]) largest = le;
    else largest = i;
    if (ri <= H && A[ri] > A[largest]) largest = ri;
    if (largest!=i){
        temp = A[i];
        A[i] = A[largest];
        A[largest] = temp;
        maxheapify(largest);
    }
}
/* main */
int main() {
    cin >> H;
    for (int i = 0; i < H; ++i) cin >> A[i+1];
    for (int i = H/2; i >= 1; --i) maxheapify(i);
    for (int i = 0; i < H; ++i) printf(" %d", A[i+1]);
    cout << "\n";
    return 0;
}
