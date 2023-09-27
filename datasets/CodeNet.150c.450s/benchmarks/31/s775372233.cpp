/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_D*/
#include <iostream>

using namespace std;

int main() {
    int n;
    int maxv;
    int minv;

    cin>>n;
    cin>> minv;
    for(int i = 0; i < n-1; i++){
        int r;
        cin>>r;
        int tmp=r- minv;
        if(i == 0 || maxv <tmp){
            maxv =tmp;
        }
        minv =min(minv,r);
    }
    cout<< maxv <<endl;
    return 0;
}