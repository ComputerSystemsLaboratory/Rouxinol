#include<iostream>
#include<string>
using namespace std;

int main(void) {
    string str[2];
    int n, point[2] = {};

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[0] >> str[1];
        if (str[0] > str[1]) {
            point[0] += 3; 
        } else if (str[0] < str[1]) {
            point[1] += 3; 
        } else {
            point[0] += 1; 
            point[1] += 1; 
        }
    }
    cout << point[0] << " " << point[1] << endl;

    return 0;
} 