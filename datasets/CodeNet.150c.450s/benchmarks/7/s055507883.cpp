#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define all(n) n.begin(),n.end()
using namespace std;

int main()
{
    const int N = 10;
    vector<int> h;
    int hnum = 0;
    rep(i,N) 
    {
        cin >> hnum;
        h.push_back(hnum);
    }

    sort(all(h));

    cout << h[9] << endl;
    cout << h[8] << endl;
    cout << h[7] << endl;



    return 0;
}