#include <iostream>
using namespace std;
  
int a, b[20] = { 0 }, c, d, ans;
  
bool check(int e, int f)
 {
    if (e == c)
        return true;
    if (f == a)
        return false;
  
    return check(e, f + 1) || check(e + b[f], f + 1);
}
  
int main()
{
    cin >> a;
    for (int i = 0;i < a;++i)
    {
        cin >> b[i];
    }
  
    cin >> d;
    for (int i = 0;i < d;++i)
    {
        cin >> c;
  
        ans = check(0, 0);
        if (ans != 0)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
}