#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> set;
    int n,q;
    int count = 0;
    cin >> n;
    for(int i = 0;i < n;i++){
        int s;
        cin >> s;
        set.insert(s);
    }
    cin >> q;
    for(int i = 0;i < q;i++){
        int t;
        cin >> t;
        for(int a : set){
            if(a == t)count++;
        }
    }
    cout << count << endl;
    return 0;
};
