#include <iostream>
using namespace std;
#define X 250

int parent(int i) {return i/2;}
int left(int i) {return 2*i;}
int right(int i) {return 2*i+1;}

int main(void){
    int H,A[X+1];
    cin >> H;
    
    for(int i=1;i<=H;i++){
        cin >> A[i];
    }
    
    for(int i=1;i<=H;i++){
        cout << "node " << i << ": ";
        cout << "key = " << A[i] << ", ";
        if(i!=1) cout << "parent key = " << A[parent(i)] << ", ";
        if(i*2<=H) cout << "left key = " << A[left(i)] << ", ";
        if(i*2+1<=H) cout << "right key = " << A[right(i)] << ", ";
        cout << endl;
    }
    
    return 0;
}
