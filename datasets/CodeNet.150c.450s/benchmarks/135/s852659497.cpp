
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

int main() {
    int N,M;
    while(cin >> N >> M,!(N==0&&M==0)){
        long long h[N+1],w[M+1];
        h[0]=0;
        w[0]=0;
        for (int i=1; i<=N; i++) {
            int k;
            cin >>k;
            h[i]=(h[i-1]+k);
        }
        for (int i=1; i<=M; i++) {
            int l;
            cin >>l;
            w[i]=(w[i-1]+l);
        }
        vector<long long> H((N+1)*(N+1)),W((M+1)*(M+1));
        for (int i=0; i<H.size(); i++) {
            H[i]=1000000007;
        }
        for (int i=0; i<W.size(); i++) {
            W[i]=1000000007;
        }
        int p=0;
        for (int i=0; i<N; i++) {
            for (int j=i+1; j<=N; j++) {
                if (h[i]<h[j]) {
                    H[p]=h[j]-h[i];
              //      cout << H[p]<<endl;
                    p++;
                }
            }
        }
        //cout << "^^^^";
        sort(H.begin(), H.end());
        int q=0;
        for (int i=0; i<M; i++) {
            for (int j=i+1; j<=M; j++) {
                if (w[i]<w[j]) {
                    W[q]=w[j]-w[i];
                 //   cout << W[q]<<endl;
                    q++;
                }
            }
        }
       // cout << "----";
        sort(W.begin(), W.end());
        for (int i=0;i<N; i++) {
           // cout << W[i]<<",";
        }
       // cout <<endl;
        for (int i=0;i<M; i++) {
           // cout << H[i];
        }
        //cout <<endl;
        long long ans=0;
        int flag=0;
        for (int i=0; i<p; i++) {
            for (int j=flag; W[j]<=H[i]&&j<q; j++) {
                if (W[j]==H[i]) {
                    ans++;
                }
                if (W[j]<H[i]) {
                    flag++;
                }
            }
        }
        cout << ans <<endl;
    }
    return 0;
}