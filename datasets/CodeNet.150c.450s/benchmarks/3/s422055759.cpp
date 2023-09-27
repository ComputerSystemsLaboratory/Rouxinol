#include <bits/stdc++.h>
using namespace std;

void Print(vector<string>& svec, string& str, int i, int j)
{
    svec.push_back(string(str.begin()+i, str.begin()+j+1));
}

void Replace(string& str, string target, int i, int j)
{
    str.replace(str.begin()+i, str.begin()+j+1, target);
}

void Reverse(string& str, int i, int j)
{
    reverse(str.begin()+i, str.begin()+j+1);
}

int main(int argc, char* argv[])
{
    string origin;
    int lines;
    vector<string> strvec;
    cin >> origin >> lines;
    for (int i = 0; i < lines; i++)
    {
        string operation;
        cin >> operation;
        if(operation=="replace")
        {
            int i,j;
            string tmpstr;
            cin >> i >> j >> tmpstr;
            Replace(origin, tmpstr, i, j);
        }else if(operation=="reverse")
        {
            int i,j;
            cin >> i >> j;
            Reverse(origin, i, j);
        }else if(operation=="print")
        {
            int i,j;
            cin >> i >> j;
            Print(strvec, origin, i, j);
        }
    }
    for (auto var : strvec)
    {
        cout << var << endl;
    }
    return 0;
}

