#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char** argv) {
    int x = 0;
    int v[3] = {0};
    
    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }
    
    for (int i = 0; i < 2; i++) {
        int j = i;
        for (int k = i+1; k < 3; k++) {
            if(v[j] > v[k]) {
                j = k;
            }
        }
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    
    for (int i = 0; i < 2; i++) {
        cout << v[i] << " ";
    }
    
    cout << v[2] << endl;
    
    return 0;
}