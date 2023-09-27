#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n<<":";
    int fac=2;
    vector<int> factors;
    if (n%fac==0)
    {
        while (n%fac==0)
        {
            factors.push_back(fac);
            n=n/fac;
        }
    }
    fac++;
    while (fac*fac<=n)
    {
        if (n%fac==0)
        {
            while (n%fac==0)
            {
                n/=fac;
                factors.push_back(fac);
            }
        }
        fac+=2;
    }
    if (n!=1) factors.push_back(n);
    for (int i=0;i<factors.size();i++) cout << " " << factors[i];
    cout << endl;
    return 0;
}
