#include <iostream>
using namespace std;
 
int main()
{
    int n; 
    long long int ans = 1;
    cin >> n;
    while(n > 0){
        ans *= n;
        n--;
    }
    cout << ans << endl;
}