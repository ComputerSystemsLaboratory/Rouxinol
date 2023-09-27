#include <iostream>
using namespace std;
int main(void){
    int n, nmax=-10000000, nmin=10000000;
    cin>> n;
    long long int nsum=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        nmax=max(nmax,x);
        nmin=min(nmin,x);
        nsum+=x;
    }
    cout<< nmin << " " << nmax << " " << nsum <<endl;
    
}

