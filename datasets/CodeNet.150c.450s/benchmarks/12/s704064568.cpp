#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int heap[250+1];

int main (void) {
    int H; 
    cin >> H;
    
    for (int i = 1; i < H+1; i++){
        cin >> heap[i];
    }
    
    for (int i = 1; i <= H; i++) {
        cout << "node " << i << ": ";
        cout << "key = " << heap[i] << ", ";
        int parent_idx = floor(i/2);
        if (parent_idx > 0) cout << "parent key = " << heap[parent_idx] << ", "; 
        int left_idx = i*2;
        if (left_idx <= H) cout << "left key = " << heap[left_idx] << ", "; 
        int right_idx = i*2 + 1;
        if (right_idx <= H) cout << "right key = " << heap[right_idx] << ", ";
        cout << endl;
        
    }
    
    return 0;
}
