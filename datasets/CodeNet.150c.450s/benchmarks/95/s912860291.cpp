#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    string s;
    while (cin>>n) {
        if (n==0) {
            break;
        } else {
            int left=0,right=0,stage=0;
            int count=0;
            for (int i=0;i<n;i++) {
                cin>>s;
                if (s=="lu") {
                    left=1;
                } else if (s=="ru") {
                    right=1;
                } else if (s=="ld") {
                    left=0;
                } else if (s=="rd") {
                    right=0;
                }
                if (stage==0&&(left==1&&right==1)) {
                    count++;
                    stage=1;
                } else if (stage==1&&(left==0&&right==0)) {
                    count++;
                    stage=0;
                }
            }
            cout<<count<<endl;
        }
    }
}

