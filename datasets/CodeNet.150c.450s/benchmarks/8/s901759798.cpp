#include<iostream>
using namespace std;
#include<string>

int main() {
        string str1, str2;
        int i, n, p1, p2;
        cin >> n;
        p1 = 0;
        p2 = 0;
        for(i = 0; i < n; i++) {
                cin >> str1 >> str2;
                if(str1 > str2) p1 += 3;
                else if(str1 < str2) p2 += 3;
                else {
                        p1++;
                        p2++;
                }
        }
        cout << p1 << " " << p2 << endl;
        return 0;
}