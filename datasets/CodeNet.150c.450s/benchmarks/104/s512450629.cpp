#include <iostream>
#include <cstdio>
#include <vector>


using namespace std;


int main(){
    
    int w,n,a,b;
    cin >> w >> n;
    vector<int> ans;
    for(int i=0;i<=w;i++){
        ans.push_back(i);
    }

    for(int i=0;i<n;i++){
        scanf("%d,%d",&a,&b);
        swap(ans[a],ans[b]);
    }
    for(int i=1;i<=w;i++){
        cout << ans[i] << endl;
    }
    
}