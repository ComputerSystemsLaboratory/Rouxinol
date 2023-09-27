#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    while (true){
        int m,a,b;
        cin >> m >> a >> b;
        if (m==0 && a==0 && b==0) break;
        vector<int> n(m);
        for (int i=0;i<m;i++){
            cin >> n.at(i);
        }
        int u=0,ans=0;
        for (int i=a-1;i<b;i++){
            if (n.at(i)-n.at(i+1)>=u) {u=n.at(i)-n.at(i+1);ans=i+1;}
        }
        cout << ans << endl;
    }
}

