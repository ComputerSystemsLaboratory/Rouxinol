#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    int m,h,i;
    string str;
    cin >> str;
    while(str != "-") {
        cin >> m;
        for(i=0;i<m;i++) {
            cin >> h;
            string left = str.substr(0,h);
            str.erase(0,h);
            str+=left;
        }
        cout << str << endl;
        cin >> str;
    }
}
