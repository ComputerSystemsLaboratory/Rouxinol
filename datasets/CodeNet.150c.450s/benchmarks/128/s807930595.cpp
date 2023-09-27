#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

int main()
{
    string str;

    while(cin>>str){
        ll l=str.size();
        while(l--){
            cout << str[l];
        }
        cout << endl;
    }

    return 0;
}