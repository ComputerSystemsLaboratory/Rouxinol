#include <iostream>

using namespace std;

bool ok(const int& p, const int& n, const int& k, const int w[])
{
    int c = 0, sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(w[i] <= p)
        {
            sum += w[i];
            if(sum > p)
            {
                c++;
                sum = w[i];
            }
        }
        else
            return false;
    }
    return c < k;
}

int main() {
    int n,k;
    cin >> n >> k;
    int w[n];
    for(int i = 0; i < n; i++)
        cin >> w[i];
    int l = 0, h = 2000000000;
    while(l+1 < h)
    {
        int m = (l+h)/2;
        if(ok(m,n,k,w)) h = m;
        else l = m;
    }
    cout << h << endl;
    return 0;
}