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
#include <list>
#include <unordered_map>

using namespace std;

long long gcd(long long a, long long b) {
    if(a < b) gcd(b, a);
    long long r;
    while ((r=a%b)) {
        a = b;
        b = r;
    }
    return b;
}

int main() {
    
    long x,y;
    cin >> x >> y;
    cout << gcd(x,y) << endl;


}
