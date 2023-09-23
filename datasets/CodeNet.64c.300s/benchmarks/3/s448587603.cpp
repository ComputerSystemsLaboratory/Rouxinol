#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int num[n];
    for (int j=0; j<n; j++) {
        cin >> num[j];
    }
    
    for (int i = n-1; i>=0; i--) {
        if (i ) {
            cout << num[i];
            cout << " ";
        }else{
            cout << num[i];
        }
        
    }
    cout << endl;
     return 0;
}