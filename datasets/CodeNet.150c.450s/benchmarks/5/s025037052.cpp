#include    <iostream>
#include    <stack>

using namespace std;

int main() {
    int n;
    stack<int> array;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        int buff;

        cin >> buff;
        array.push(buff);
    }
    while(!array.empty()) {
        cout << array.top();
        array.pop();
        if(!array.empty()) cout << ' ';
    }
    cout << endl;

    return 0;
}
