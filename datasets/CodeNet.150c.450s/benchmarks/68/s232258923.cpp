#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n,a;
    while (cin>>n) {
        if (n==0) {
            break;
        } else {
            std::deque<int> deq;
            for (int i=0;i<n;i++) {
                cin>>a;
                deq.emplace_back(a);
            }
            int min=1000000;
            for (int j=0;j<deq.size()-1;j++) {
                for (int k=j+1;k<deq.size();k++) {
                    if (abs(deq[j]-deq[k])<min) {
                        min=abs(deq[j]-deq[k]);
                    }
                }
            }
            cout<<min<<endl;
        }
    }
}

