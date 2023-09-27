#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define clr(a) memset(a, 0x00, sizeof(a))
#define Error(x) cout << #x << " = " << x << endl
#define iDEBUG freopen("in.txt", "r", stdin)
#define oDEBUG freopen("out.txt","w",stdout)
#define pb push_back
#define pp pop_back
#define x first
#define y second
#define all(x) x.begin(),x.end()
#define hi cout << "hi" << endl
typedef long long ll;

using namespace std;

int main()
{_
    //iDEBUG;
    list<int> l;
    list<int>::iterator iter;

    int n, x;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string str;
        cin >> str;
        if(str == "deleteFirst")
            l.pop_front();
        else if(str == "deleteLast")
            l.pop_back();
        else if(str == "insert")
        {
            cin >> x;
            l.push_front(x);
        }
        else
        {
            cin >> x;
            for(iter=l.begin(); iter!=l.end(); iter++)
                if(*iter == x)
                {
                    l.erase(iter);
                    break;
                }
        }
    }
    for(iter=l.begin(); iter!=l.end(); iter++)
    {
        if(iter != l.begin())
            cout << " ";
        cout << *iter;
    }
    cout << endl;

    return 0;
}
