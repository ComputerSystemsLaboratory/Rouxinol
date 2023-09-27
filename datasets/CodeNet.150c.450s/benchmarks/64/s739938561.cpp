#include <iostream>
#include <cstdint>

using namespace std;

bool f(int A[], int n, int m)
{
    for(int32_t bits=(1 << n) -1; bits >= 0; bits--){
        int sum=0;
        for(int i=0; i<n; i++){
            if(bits & (1<<i)){
                sum+=A[i];
                if(sum==m){
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int n, q;

    scanf("%d", &n);
    //cin >> n;
    int A[n];
    for(int i=0; i<n; i++){
        //cin >> A[i];
        scanf("%d", &A[i]);
    }

    //cin >> q;
    scanf("%d", &q);
    for(int i=0; i<q; i++){
        int m;
        //cin >> m;
        scanf("%d", &m);
        if(f(A, n, m)){
            cout << "yes" << endl;
        } else{
            cout << "no" << endl;
        }
    }
    return 0;
}