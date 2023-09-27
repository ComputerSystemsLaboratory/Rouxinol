#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{   
    while(true){
    
    int i, n, k;
    cin >> n >> k;
    if((n==0)&(k==0))break;
    int a[n];
    for(i=0; i<n ;i++){
        cin >> a[i];
    }

    int max_val;
    int S;
    //--init--
    S = 0;
    for(i=0; i<k; i++){
        S += a[i];
    }
    max_val = S;
    for(i=0; i<n-k; i++){
        S += a[i+k];
        S -= a[i];
        if(max_val < S){
            max_val = S;
        }
    }
    std::cout << max_val << std::endl;
    }
    return 0;
}
