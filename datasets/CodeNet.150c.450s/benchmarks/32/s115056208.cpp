#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n,a,b,x;
    while (cin>>n) {
        if (n==0) {
            break;
        } else {
            cin>>a>>b;
            std::deque<int> deq;
            for (int i=0;i<n;i++) {
                cin>>x;
                deq.emplace_back(x);
            }
            int gap=-1;
            int ans=0;
            while (a<=b) {
                if (deq[a-1]-deq[a]>=gap) {
                    gap=deq[a-1]-deq[a];
                    ans=a;
                }
                a++;
            }
            cout<<ans<<endl;
        }
    }
}
