#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string input;
    string first, second;
    int max_freq = 0;
    map<string, int> data;

    cin >> input;
    first = second = input;

    while (cin >> input) {
        if (input.size() > second.size())
            second = input;

        data[input]++;

        if (data[input] > max_freq) {
            first = input;
            max_freq = data[input];
        }
    }

    cout << first << " " << second << endl;

    return 0;
}