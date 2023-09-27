#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;

int main(void){
    int n, r, p, c;
    while(cin >> n >> r){
        int A[51] = {0};
        if(n == 0 && r == 0)    break;
    for(int i = 1; i <= n; i++) A[i] = n+1-i;
    for(int j = 0; j < r; j++){
        cin >> p >> c;
        rotate(A+1, A+p, A+p+c);
    }
    cout << A[1] << endl;
    }
    return 0;
}
