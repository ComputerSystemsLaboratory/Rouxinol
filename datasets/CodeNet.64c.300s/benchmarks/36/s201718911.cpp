#include <iostream>
#include <math.h>
using namespace std;


int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    int m = max(max(a,b),c);
    int s = min(min(a,b),c);
    cout << s << " " << (sum - m -s) << " " << m << endl;
    return 0;
}
