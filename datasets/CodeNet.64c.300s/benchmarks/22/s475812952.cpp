#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
            cout<<"YES\n";
        else
            cout<<"NO\n"; 
    }
    return 0;
}