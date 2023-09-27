
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct ToUpper {
    char operator()(char c) { return toupper(c); }
};

int main()
{
    const string kEndOfText = "END_OF_TEXT";

    string src;
    cin >> src;
    transform(src.begin(), src.end(), src.begin(), ToUpper());

    int count = 0;
    string buf;
    while(true)
    {
        cin >> buf;
        if(buf == kEndOfText){ break; }

        transform(buf.begin(), buf.end(), buf.begin(), ToUpper());
        if(buf == src){ count++; }
    }

    cout << count << endl;

    return 0;
}