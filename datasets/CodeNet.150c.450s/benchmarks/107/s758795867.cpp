#include    <bits/stdc++.h>
using   namespace   std;
typedef long long ll;

#define INF (1<<30)

#define Rep0(i, n)  for (int i=0; i<n; i++)
#define Rep1(i, n)  for (int i=1; i<=n; i++)

int main() {
    string s1, s2;
    cin >>s1 >>s2;
    int n1=s1.size();
    int n2=s2.size();
    vector<vector<int>> DP(n1+1, vector<int> (n2+1, INF));
    Rep0(i, n1+1)
        DP.at(i).at(0)=i;
    Rep0(j, n2+1)
        DP.at(0).at(j)=j;
    Rep1(i, n1)
        Rep1(j, n2) {
            int cost=1;
            if (s1.at(i-1)==s2.at(j-1))
                cost=0;
            DP.at(i).at(j)=DP.at(i-1).at(j-1)+cost;
            DP.at(i).at(j)=min(DP.at(i).at(j), DP.at(i-1).at(j)+1);
            DP.at(i).at(j)=min(DP.at(i).at(j), DP.at(i).at(j-1)+1);
        }
    cout <<DP.at(n1).at(n2) <<endl;
    return 0;
}
