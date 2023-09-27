#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    string keys[n];
    for (int i = 0; i < n; ++i) {
        cin >> keys[i];
    }
    int m;
    cin >> m;
    bool isOpen = false;
    for (int i = 0; i < m; ++i) {
        string key;
        cin >> key;
        string result = "Unknown ";
        for (int j = 0; j < n; ++j) {
            if (keys[j] == key) {
                result = isOpen ? "Closed by " : "Opened by ";
                isOpen = !isOpen;
            }
        }
        cout << result << key << endl;
    }
}