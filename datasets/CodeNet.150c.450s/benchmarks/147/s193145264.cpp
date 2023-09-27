#include <iostream>
#include <vector>
using namespace std;

int f(int x,int y,int z){
    return x*x+y*y+z*z+x*y+y*z+z*x;
}

int main(){
    int n;
    cin >> n;
    vector<int> ans(n+1);
    for(int x=1;x*x<=n;x++){
        for(int y=1;x*x+y*y<=n;y++){
            for(int z=1;f(x,y,z)<=n;z++){
                ans[f(x,y,z)]++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout << ans[i] << endl;
    }
    return 0;
}
