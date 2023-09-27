#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for (int t=0; t<T; t++)
    {
        int N;
        cin>>N;
        vector<long long> A(N);
        for (long long &a: A)
            cin>>a;
        string S;
        cin>>S;

        vector<long long> T;
        int ans = 0;

        for (int i=0; i<N; i++)
            if (S[i]=='1')
            {
                T.clear();
                for (int j=i+1; j<N; j++)
                    if (S[j]=='0')
                        T.push_back(A[j]);
                T.push_back(A[i]);
                bool ok = true;
                int p = 0;
                for (int b=0; b<60; b++)
                {
                    int t=p;
                    while (t<(int)T.size()-1 && (T[t]>>b&1)==0)
                        t++;
                    if (t>=(int)T.size()-1)
                    {
                        if (T[T.size()-1]>>b&1)
                        {
                            ok = false;
                            break;
                        }
                    }
                    else
                    {
                        swap(T[p], T[t]);
                        for (int i=0; i<(int)T.size(); i++)
                            if (i!=p && (T[i]>>b&1)!=0)
                            {
                                T[i] ^= T[p];
                            }
                        p++;
                    }
                }
                if (!ok)
                {
                    ans = 1;
                    break;
                }
            }
        cout<<ans<<endl;
    }
}
