#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <functional>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
    int n, m;
    while(cin >> n && n) {

        map<char, char> conv;
        char a, b;
        for(int i = 0; i < n; i++) {
            cin >> a >> b;
            conv[a] = b;
        }
    
        cin >> m;
    
        char c;
        map<char, char>::iterator it;
        for(int i = 0; i < m; i++) {
            cin >> c;
            putchar(conv[c] ? conv[c] : c);
        }

        putchar('\n');
    }
}