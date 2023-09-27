#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int N=999999;
    int p[N] , s[N];
    p[0]=0 , s[0]=0;
    for (int i=1; i<N; i++){
        p[i] = 1;
        s[i] = 0;
    }
    for (int i=1; i<N; i++){
        if (p[i]==1){
            int n=i+1 , m=2*n;
            while (m<=N){
                p[m-1] = 0;
                m += n;
            }
        }
    }
    
    for (int i=1; i<N; i++){
        s[i] = s[i-1]+p[i];
    }
    int n;
    while (1){
        cin >> n;
        if (cin.eof())
            break;
        cout << s[n-1] << endl;
    }
    return 0;
}