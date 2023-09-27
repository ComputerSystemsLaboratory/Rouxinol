#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
    array<int,10> ar;
    for(int i=0;i<10;i++){
        int height;
        cin >> height;
        ar[i]=height;
        }
    sort(ar.begin(),ar.end());
    for(int j=0;j<3;j++){
        cout << ar[9-j] << endl;
        
    }
}