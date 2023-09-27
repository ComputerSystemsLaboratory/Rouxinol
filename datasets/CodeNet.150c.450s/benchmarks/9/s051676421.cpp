#include<bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;

/* 引数がうまくいかん
std::string shuffle(std::string str, int x)
{
    std::string str__;
    cout << str << endl;
    std::string s = str.substr(0, x); //部分文字列を返す
    str.erase(0, x); //頭からx文字分削除
    cout << str << endl;
    str += s; //末尾にsを追加
    cout << str << endl;

    str__ = str;

     return str__;
}*/

int main()
{
    std::vector<std::string> str(11);
    int i=0;

    while (1)
    {
        std::string s;
        int m=0, x;
        cin >> s;
        if (s == "-")
            break;
        
        str[i] = s;

        cin >> m;
        for (int j = 0; j < m; ++j)
        {
            cin >> x;
            std::string s__ = str[i].substr(0, x); //部分文字列を返す
            str[i].erase(0, x); //頭からx文字分削除
            str[i] += s__; //末尾にsを追加
        }
        i++;
    }

    for (int j = 0; j < i; j++)
        cout << str[j] << endl;
        

    return 0;
}
