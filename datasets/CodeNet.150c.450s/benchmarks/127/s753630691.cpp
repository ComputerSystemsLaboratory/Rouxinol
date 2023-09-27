#include <iostream>
#include <string>
#include <set>
#include <algorithm> // std::reverse

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::set;

int main(void) {
    int m;
    int size;
    cin >> m;
    string str;
    for (int input = 0; input < m; input++) {
        cin >> str;
        size = str.size();
        set<string> string_set;
        for (int sep = 0; sep < size - 1; sep++) {
            string left;
            string left2;
            string right;
            string right2;
            left = str.substr(0 , sep + 1);
            right = str.substr(sep + 1 , size - sep - 1);
            left2 = left;
            right2 = right;

            std::reverse(left2.begin(), left2.end());
            std::reverse(right2.begin(), right2.end());

            string_set.insert(left + right);
            string_set.insert(left + right2);
            string_set.insert(left2 + right);
            string_set.insert(left2 + right2);
            string_set.insert(right + left);
            string_set.insert(right + left2);
            string_set.insert(right2 + left);
            string_set.insert(right2 + left2);
        }
        cout << string_set.size() << endl;

        /*
        // c++11
        for(auto itr = string_set.begin(); itr != string_set.end(); ++itr) {
            std::cout << *itr << "\n";      // ????????¬???????????????????????????????????¨???
        }
        */
    }

    return 0;
}