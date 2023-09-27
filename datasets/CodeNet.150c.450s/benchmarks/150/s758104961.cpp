#include<bits/stdc++.h>

using namespace std;

int ara[20000];
int main()
{
    int n ;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        int a;
        cin >> a;
        ara[a]++;
    }
    int f = 0;
    for(int i = 0; i<10007; i++)
        while(ara[i]--){
            if(f) printf(" ");
            cout << i ;
            f = 1;
        }
    cout << endl;
    return 0;
}