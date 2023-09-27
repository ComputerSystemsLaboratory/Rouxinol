#include<cstdio>
#include<cstring>
#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main(){
    string str; // 文字列
    int q; // 命令の数

    cin >> str;
    cin >> q;

    // cout << str << endl;
    // cout << q << endl;

    for(int i = 0; i < q; i++){
        // cout << str << endl;

        string meirei;
        cin >> meirei;
        // cout << meirei << endl;

        // switch(meirei){
        //     case "print":
        //         break;
        //     case "reverse":
        //         break;
        //     case "replace":
        //         break;
        // }

        if("print" == meirei){
            // cout << "print" << endl;
            int a, b;
            string str1;
            cin >> a >> b;
            // cout << a << " " << b << endl;
            str1 = str.substr(a, b - a + 1);
            cout << str1 << endl;
        } else if ("reverse" == meirei) {
            // cout << "reverse" << endl;
            int a, b;
            cin >> a >> b;
            // cout << a << " " << b << endl;

            string str1, str2;
            for(int i = a; i <= b; i++){
                str1 += str[i];
                str2 += str[i];
            }
            // cout << str1 << endl;
            // cout << str1.size() << endl;
            for(int i = 0; i < str1.size(); i++){
                // cout << str1[i] << endl;
                str2[i] = str1[str1.size() - 1 - i];
                // cout << str2[i] << endl;
            }
            // cout << str2 << endl;
            str = str.replace(a, b - a + 1, str2);

        } else if ("replace" == meirei) {
            // cout << "replace" << endl;
            // string a, b, p;
            int a, b;
            string p;

            cin >> a >> b >> p;
            // cout << a << " " << b << " " << p << endl;
            str = str.replace(a, b - a + 1, p);

        }
    }

    return 0;
}
