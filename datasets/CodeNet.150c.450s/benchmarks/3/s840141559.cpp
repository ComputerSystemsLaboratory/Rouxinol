#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main () {
    // input
    string str;
    cin >> str;

    int q;
    cin >> q;

    string result = str;
    int res_len = result.length();
    for (int i=0; i<q; i++) {
        string order;
        int a, b;
        cin >> order >> a >> b;
        if (order == "print") {
            // output
            cout << result.substr(a, b-a+1) << endl;
        } else if (order == "reverse") {
            string reversed = "";
            for (int j=0; j<a; j++) {
                reversed += result[j];
            }
            for (int jj=b; jj>a-1; jj--) {
                reversed += result[jj];
            }
            for (int jjj=b+1; jjj<res_len; jjj++) {
                reversed += result[jjj];
            }
            result = reversed;
            //cout << reversed << endl;
        } else if (order == "replace") {
            string p;
            cin >> p;
            string replaced = "";
            for (int k=0; k<a; k++) {
                replaced += result[k];
            }
            for (int kk=a; kk<b+1; kk++) {
                replaced += p[kk-a];
            }
            for (int kkk=b+1; kkk<res_len; kkk++) {
                replaced += result[kkk];
            }
            result = replaced;
            //cout << result << endl;
        }
    }
}
