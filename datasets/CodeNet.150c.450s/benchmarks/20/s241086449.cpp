#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <map>
#include <deque>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>

using namespace std;


int main() {
   

    long s;
    cin >> s;
    int a,b,c;
    a = s/3600;
    s %= 3600;
    b = s/60;
    s %= 60;
    cout << a << ':' << b << ':' << s << endl;
}
