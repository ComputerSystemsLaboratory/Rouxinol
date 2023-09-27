#include <iostream>
#include <string>

using namespace std;

int main()
{
    string messages[9]= {".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string msg;
        int count = 0;
        char prev = '0';

        cin >> msg;

        for (int j = 0; j < msg.size(); j++) {
            char c = msg[j];

            if (c == '0') {
                if (prev == '1') {
                    cout << messages[0][(count-1) % 5];
                } else if (prev == '2') {
                    cout << messages[1][(count-1) % 3];
                } else if (prev == '3') {
                    cout << messages[2][(count-1) % 3];
                } else if (prev == '4') {
                    cout << messages[3][(count-1) % 3];
                } else if (prev == '5') {
                    cout << messages[4][(count-1) % 3];
                } else if (prev == '6') {
                    cout << messages[5][(count-1) % 3];
                } else if (prev == '7') {
                    cout << messages[6][(count-1) % 4];
                } else if (prev == '8') {
                    cout << messages[7][(count-1) % 3];
                } else if (prev == '9') {
                    cout << messages[8][(count-1) % 4];
                }
                count = 0;
            } else {
                count++;
            }
            prev = msg[j];
        }
        cout << endl;
    }

    return 0;
}