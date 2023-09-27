#include<bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;

std::vector<std::string> split(const std::string &str, char sep)
{
    std::vector<std::string> v;
    std::stringstream ss(str);
    std::string buffer;
    while( std::getline(ss, buffer, sep) ) {
        v.push_back(buffer);
    }
    return v;
}

int main()
{
    int n, reT=0, reH=0;
    std::string str, doubt;
    std::vector<std::string> v;
    cin >> n;

    std::getline(cin, doubt);
    for (int i = 0; i < n; ++i)
    {
        std::getline(cin, str);
        v = split(str, ' ');
        if (v[0] > v[1])
            reT += 3;
        else if(v[0] < v[1])
            reH += 3;
        else
        {
            reT++; reH++;
        }
    }

    cout << reT << " " << reH << endl;
    return 0;
}
