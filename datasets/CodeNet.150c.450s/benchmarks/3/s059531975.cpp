#include<iostream>
#include<string>

using namespace std;

int main () {

    string str;
    cin >> str;

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {

        string order;
        cin >> order;

        // cout << "Scan order" << endl;

        int a, b;
        cin >> a >> b;

        // cout << "Scan a & b" << endl;

        if (order == "print") {

            // cout << "Mode print" << endl;

            string out;
            out = str.substr(a, b + 1 - a);

            cout << out << endl;

        } else if (order == "reverse") {

            // cout << "Mode reverse" << endl;

            int j = 0;
            while (j <= (b - a) / 2) {

                char tmp;
                tmp = str[a + j];
                str[a + j] = str[b - j];
                str[b - j] = tmp; 
                j++;

            }

            // cout << "Result reverse: " << str << endl;

        } else if (order == "replace") {

            // cout << "Mode replace" << endl;
            
            string p;
            cin >> p;

            for (int j = a; j <= b; j++) {

                str[j] = p[j - a];

            }
        
        }

    }

    return 0;
}
