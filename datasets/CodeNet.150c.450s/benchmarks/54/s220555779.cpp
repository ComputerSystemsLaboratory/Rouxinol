#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    string w, t;
    int count = 0;
    cin >> w;
    for (int i = 0; i < w.size() ; ++i)
    {
        w[i] = tolower(w[i]);
    }
    while(1) {
        cin >> t;
        if(t == "END_OF_TEXT") break;

        for (int i = 0; i < t.size() ; ++i)
        {
            t[i] = tolower(t[i]);
        }

        if(t == w)
        {
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}