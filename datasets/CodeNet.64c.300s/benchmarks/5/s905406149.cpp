#include <iostream>
using namespace std;

int main() {
    int height[10];
    for (int i = 0; i < 10; i++) {
        cin>>height[i];
    }
    for (int i = 0; i < 10; i++) {
        for (int j = i; j < 10; j++) {
            int max = height[i];
            int c = i;
            if (height[j] > max) {
                max = height[j];
                c = j;
            }
            int temp;
            temp = height[c];
            height[c] = height[i];
            height[i] = temp;
        }
    }
    cout<<height[0]<<endl;
    cout<<height[1]<<endl;
    cout<<height[2]<<endl;
    return 0;
}