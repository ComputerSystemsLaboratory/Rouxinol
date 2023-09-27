#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(void) {

    int n;
    int q = 0, p = 0, e = 0,g = 0;
    string s;
    // 検索先の文字列
    string a = "A"; // 検索文字列 // AC
    string w = "W"; // WA
    string t = "T"; // TLE
    string r = "R"; // RE

    cin >> n;


    for (int i = 0; i < n; i++) {

        cin >> s;

        
        if (s.find_first_of("A") == 0) {
            
            q++;

        }

        if (s.find_first_of("W") == 0) {

            p++;

        }

        if (s.find_first_of("T") == 0) {

            e++;

        }

        
        if (s.find_first_of("R") == 0) {

            g++;

        }


    }


    cout << "AC x " << q << endl;
    cout << "WA x " << p << endl;
    cout << "TLE x " << e << endl;
    cout << "RE x " << g << endl;

    
    return 0;
}

