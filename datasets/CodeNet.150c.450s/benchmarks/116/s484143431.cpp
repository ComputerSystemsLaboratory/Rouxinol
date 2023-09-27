#include <iostream>
#include <vector>

using namespace std;

#define MAX(a,b) ((a)>(b)?(a):(b))

int main()
{
    int n,k;
    long long temp;
    long long ans;

    vector<long long> num;

    cin >> n >> k;
    while(n!=0 && k!=0) {
        for(int i=0; i<n; ++i) {
            cin >> temp;
            num.push_back(temp);
        }

        ans=0;

        for(int i=0; i<k; ++i) {
            ans+=num[i];
        }

        temp=ans;

        if(k!=n) {
            for(int i=k; i<n; ++i) {
                temp=temp+num[i]-num[i-k];
                ans=MAX(ans,temp);
            }
        }

        cout << ans << endl;
        num.clear();
        cin >> n >> k;
    }
    return 0;
}