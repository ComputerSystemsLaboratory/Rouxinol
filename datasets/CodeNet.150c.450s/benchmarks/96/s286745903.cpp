#include <bits/stdc++.h>
#define rep( i, begin, end) for( int i = begin; i < end; i++ )
using namespace std;
 
string button[10] = { "", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
 
int main() {
    int n;
    cin >> n;
    rep( i, 0, n ) {
        string input, message = "";
        cin >> input;
        int key = 0, position = 0;
        rep( i, 0, input.size() ) {
            if ( input[i] == '0' ) {
                if ( key == 0 )
                    continue;
                position %= button[key].size();
                message += button[key][position];
                key = 0;
                position = 0;
            }
            else if ( key == 0 ) {
                key = input[i] - '0';
                position = 0;
            }
            else if ( key == input[i] - '0') {
                position++;
            }
        }
        cout << message << endl;
    }
    
    return 0;
}