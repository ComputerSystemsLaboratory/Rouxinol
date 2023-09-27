#include <iostream>
#include <algorithm>

using namespace std;

inline int cubic(int x){
    return x*x*x;
}

inline int square(int x){
    return x*x;
}

int main(){
    int n;
    while(cin >> n && n){
        int ret = 1 << 29;
        for(int i=0;cubic(i)<=n;i++){
            int tmp = n - cubic(i);
            for(int j=0;square(j)<=tmp;j++){
                ret = min(ret, i+j+tmp-square(j));
            }
        }
        cout << ret << endl;
    }
}