#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int h[2000000], n=0;
    int key;
    int i, m;
    
    string com;
    while(true) {
        cin>>com;
        if(com[0]=='i') {
            cin>>key;
            i = ++n;
            while(i>1) {
                if(h[i/2]>key) break;
                h[i]=h[i/2];
                i/=2;
            }
            h[i]=key;
        } else if(com[1]=='x') {
            cout<<h[1]<<'\n';
            key=h[n--];
            i=1;
            while(true) {
                m=2*i;
                if(m>n) break;
                if(m<n && h[m+1]>h[m]) ++m;
                if(h[m]<key) break;
                h[i]=h[m];
                i=m;
            }
            h[i]=key;
        } else {
            break;
        }
    }
    return 0;
}