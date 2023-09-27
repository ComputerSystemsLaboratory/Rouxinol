#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
//ranker
using namespace std;

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using pii = pair<int, int>;
using pis = pair<int, string>;
using psi = pair<string, int>;
using D = double;


int main()
{
    string str;

    cin >> str;
    reverse( str.begin() , str.end() );
    cout << str << endl;

    return 0;
}