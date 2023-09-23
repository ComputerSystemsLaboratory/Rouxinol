#include <iostream>
 
using namespace std;
 
void solve()
{
    int N;
    cin >> N;
    int sum = 100000;
    for(int i = 0; i < N; ++i)
    {
        sum *= 1.05;
        if(sum % 1000 != 0)
        {
            sum += 1000 - (sum % 1000);
        }
    }
    cout << sum << endl;
}
 
int main()
{
    solve();
    return(0);
}