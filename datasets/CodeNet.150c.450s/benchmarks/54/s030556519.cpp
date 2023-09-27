#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string w;
    cin >> w;

    int count = 0;

    while(true) {
        string t;
        cin >> t;

        if (t == "END_OF_TEXT")
            break;

        transform(t.begin(), t.end(), t.begin(), ::tolower);

        if (t == w)
            count++;
    }
    cout << count << endl;
    return 0;
}