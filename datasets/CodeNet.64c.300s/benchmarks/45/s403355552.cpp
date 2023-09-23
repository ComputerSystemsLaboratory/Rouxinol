#include <iostream>
using namespace std;

int main()
{
        int N,M,P;
        while(cin >> N >> M >> P, (N||M||P))
        {
                int a[200];
                int cnt=0;
                for(int i=0; i<N; i++)
                {
                        cin >> a[i];
                        cnt+=a[i];
                }

                if(a[M-1]==0) cout << 0 << endl;
                else
                {
                        cout << (int)(1.0*cnt*(100-P)/a[M-1]) << endl;
                }
        }
}