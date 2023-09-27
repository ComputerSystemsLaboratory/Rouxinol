/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_A&lang=jp*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int count=0;
    int n,q;
    vector<int> s;

    cin>>n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin>>tmp;
        s.push_back(tmp);
    }
    cin>>q;
    for (int i = 0; i < q; i++) {
        int tmp;
        cin>>tmp;
        for(int j:s) {
            if(j==tmp){
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}