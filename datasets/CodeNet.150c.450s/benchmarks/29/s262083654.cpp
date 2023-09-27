#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    list<int> l;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string comm;
        int x;
        cin >> comm;
        if(comm=="insert"){
            cin >> x;
            l.push_front(x);
        }else if(comm=="delete"){
            cin >> x;
            for(auto it=l.begin();it!=l.end();it++){
                if(*it==x){
                    l.erase(it);
                    break;
                }
            }
        }else if(comm=="deleteFirst"){
            l.pop_front();
        }else{
            l.pop_back();
        }
    }
    for(auto it=l.begin();it!=l.end();it++){
        if(it!=l.begin()) cout << ' ';
        cout << *it;
    }
    cout << endl;

    return 0;
}
