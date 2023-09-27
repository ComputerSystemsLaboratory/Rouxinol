#include<bits/stdc++.h>

using namespace std;

int main()
{
    int hi,a=10;
    vector<int> mou;
    while(a--)
    {
        cin>>hi;
        mou.push_back(hi);
    }
    sort(mou.rbegin(),mou.rend());
    for(int i=0;i<3;i++)
        cout<<mou[i]<<endl;
    return 0;
}