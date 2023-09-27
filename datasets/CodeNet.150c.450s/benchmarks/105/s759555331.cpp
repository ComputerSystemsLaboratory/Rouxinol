#include <bits/stdc++.h>

#define ll long long
using namespace std;
#define BITS 61
void solve()
{
    int N;
    cin>>N;
    vector<ll> A(N);
    for(auto &a: A)
        cin>>a;
    string S;
    cin>>S;
    int ok = 1;
    vector<ll> B(BITS,0);
    for(int i=N-1; i>=0 && ok; --i)
    {
        if(S[i]=='0')
        {
            for(int j=0; j<BITS; ++j)
                if(A[i] & ((1ll)<<j))
                {
                    if(B[j]==0)
                    {
                        B[j] = A[i];
                        A[i] = 0;
                    }
                    else
                    {
                        A[i]^=B[j];
                    }
                }
        }
        else
        {
            for(int j=0; j<BITS; ++j)
                if(A[i] & ((1ll)<<j))
                    A[i]^=B[j];
            if(A[i]!=0)
                ok=0;
        }
        
    }
    cout<<(1^ok)<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
    cin>>T;
    while(T--)
        solve();

		
	return 0;
}
