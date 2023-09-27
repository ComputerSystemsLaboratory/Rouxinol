#include <iostream>
#include <map>
using namespace std;

int main() {
    int N,Q,x;
    cin >> N;
    map<int,int> A;

    long long sum = 0;
    for(int i = 0; i < N;i++){
        cin >> x;
        A[x]++;
        sum+= x;
    }

    cin >> Q;
    for(int i = 0; i < Q;i++){
        int a,b;
        cin >> a >> b;
        sum = sum + (b-a) * A[a];
        A[b] += A[a];
        A[a] = 0;
        cout << sum << endl;
    }

    return 0;
}
