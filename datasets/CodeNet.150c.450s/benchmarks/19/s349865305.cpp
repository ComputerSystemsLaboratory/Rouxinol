#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    
    while((cin >> a >> b) && (a || b)) cout << min(a,b) << ' ' << max(a,b) << endl;
    
    return 0;
}
