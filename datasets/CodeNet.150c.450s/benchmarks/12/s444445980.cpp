#include <iostream>
#define MAX 100000

using namespace std;

int h;

void print(int i, int h, int *A){
    cout << "node " << i << ": ";
    cout << "key = " << A[i] << ", ";
    if(i > 1) cout << "parent key = " << A[i/2] << ", ";
    if(2 * i  <= h) cout << "left key = " << A[2*i] << ", ";
    if(2 * i + 1 <= h) cout << "right key = " << A[2*i+1] << ", ";
}

int main(){
    int i, A[MAX+1];
    cin >> h;
    for(i = 1; i <= h; i++) cin >> A[i];
    for(i = 1; i <= h; i++){
        print(i, h, A);
        cout << endl;
    }
    return 0;
}
