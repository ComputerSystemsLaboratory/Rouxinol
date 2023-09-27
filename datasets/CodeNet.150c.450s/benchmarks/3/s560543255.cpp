#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string str;
    cin.tie(0);
    int n, i;
    
    cin >> str >> n;
    
    for (i = 0; i < n; ++i) {
        int a, b;
        string order, temp;
        cin >> order >> a >> b;
        
        if (order == "print") {
                cout << str.substr(a, b - a + 1) << endl;
        } else if (order == "reverse") {
            temp = str.substr(a, b - a + 1);
            for (int j = 0; j < b - a + 1; ++j) {
                str[b - j] = temp[j];
            }
        } else {
            cin >> temp;
            str.replace(a , b - a + 1, temp);
        }
    }

    return 0;
}