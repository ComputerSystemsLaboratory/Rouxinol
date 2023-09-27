#include <iostream>

using namespace std;

int main()
{
    int x;
    int ans;
    cin >> x;
    while(x!=0) {
        x=1000-x;
        ans=0;
        ans+=x/500;
        x=x%500;
        ans+=x/100;
        x=x%100;
        ans+=x/50;
        x=x%50;
        ans+=x/10;
        x=x%10;
        ans+=x/5;
        x=x%5;
        ans+=x;
        cout << ans << endl;
        cin >> x;
    }
    return 0;
}