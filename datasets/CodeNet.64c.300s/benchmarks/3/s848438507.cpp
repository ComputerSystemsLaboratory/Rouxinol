#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int i;
    cin >> n;
    int A[n];
    for (i=0; i<n; i++) {
        cin >> A[i];
    }
    for (i=n-1; 0<i+1; i--) {
        cout << A[i];
        if(i!=0){
            cout <<' ';
        }else{
            cout << endl;
        }
    }
    return 0;
}