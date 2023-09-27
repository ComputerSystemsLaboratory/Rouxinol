#include <bits/stdc++.h>
using namespace std;

int main() {
    while(1){
        int a,l;
        cin >> a >> l;
        if(l==0)break;
        map<int,int> mp;
        int c = 0;
        while(mp.count(a)==0){
            mp[a] = c;
            c++;
            string s="";
            for(int i=0;i<l;i++){
                s += '0'+a%10;
                a/=10;
            }
            int amin,amax;
            sort(s.begin(),s.end());
            amin = stoi(s);
            sort(s.rbegin(),s.rend());
            amax = stoi(s);
            a = amax - amin;
        }
        cout << mp[a] << " " << a << " " << c-mp[a] << endl;
    }
    return 0;
}

