#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
#include <list>
#include <cstring>
#include <stack>
   
using namespace std;

bool solve(int a, int b, int c)
{
    return (a * a + b * b == c * c);
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(solve(a, b, c) || solve(b, c, a) || solve(c, a, b)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}