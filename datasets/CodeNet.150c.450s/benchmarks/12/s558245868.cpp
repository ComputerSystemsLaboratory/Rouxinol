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
{
    //iDEBUG;
    int n;
    cin >> n;
    int *tree = new int[n];
    for(int i=0; i<n; i++)
        cin >> tree[i];

    for(int i=0; i<n; i++)
    {
        cout << "node " << i+1 << ": key = " << tree[i] << ", ";
        if(i != 0)
        {
            if(i%2 == 0)
                cout << "parent key = " << tree[i/2-1] << ", ";
            else
                cout << "parent key = " << tree[i/2] << ", ";
        }
        if(i*2+1 < n)
            cout << "left key = " << tree[i*2+1] << ", ";
        if(i*2+2 < n)
            cout << "right key = " << tree[i*2+2] << ", ";
        cout << endl;
    }
    return 0;
}

