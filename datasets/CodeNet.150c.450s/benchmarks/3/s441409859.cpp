#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    string str, com, p;
    int q, a, b;
 
    cin >> str >> q;
 
    for (int i = 0; i < q; i++) {
        cin >> com >> a >> b;
        if (com == "print") {
            cout << str.substr(a, b - a + 1) << endl;
        }
        else if (com == "reverse") {
            string tmp = str.substr(a, b - a + 1);
            int n = tmp.size();
            for (int j = 0; j < n; j++)str[j + a] = tmp[n - j - 1];
        }
        else if(com=="replace"){
            cin >> p;
            str = str.replace(a, b - a + 1, p);
        }
    }
    return 0;
}
