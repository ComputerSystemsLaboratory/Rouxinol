#include <iostream>
#include <vector>
int main(){
    using namespace std;
    int n,x,i,j,k,l,ans;
    vector<int> vn;
    vector<int> vx;
    while(1){
        cin >> n >> x;
        if(n==0&&x==0){
            break;
        }
        vn.push_back(n);
        vx.push_back(x);
    }
    int size = vn.size();
    for(i=0;i<size;i++){
        ans = 0;
        for(j=1;j<=(vx[i]/3);j++){
            for(k=j+1;k<=vn[i];k++){
                for(l=(vx[i]/3)+1;l<=vn[i];l++){
                    if(j+k+l==vx[i]&&j<k&&k<l){
                        ans++;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}