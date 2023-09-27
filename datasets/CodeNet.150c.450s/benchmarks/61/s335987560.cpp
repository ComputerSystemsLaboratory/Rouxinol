#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n,a,b,c,x,y;
    while (cin>>n>>a>>b>>c>>x) {
        if (n==0&&a==0&&b==0&&c==0&&x==0) {
            break;
        } else {
            std::deque<int> deq;
            for (int i=0;i<n;i++) {
                cin>>y;
                deq.emplace_back(y);
            }
            int frame=0;
            int count=0;
            int j=0;
            while (frame<=10000) {
                if (x==deq[j]) {
                    j++;
                    count++;
                    
                }
                x=(a*x+b)%c;
                if (count==n) {
                    break;
                }
                frame++;
            }
            if (frame!=10001) {
                cout<<frame<<endl;
            } else {
                cout<<-1<<endl;
            }
        }
    }
}

