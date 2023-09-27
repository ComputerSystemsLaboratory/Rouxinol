#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    while(1){
        int n,m;
        cin >> n >> m;
        if(n==0) break;

        vector<int> h(n), w(m);
        for(int i=0; i<n; i++){
            cin >> h[i];
        }
        for(int i=0; i<m; i++){
            cin >> w[i];
        }

        unordered_map<int,int> width, height;
        for(int i=0; i<n; i++){
            int subtotal=0;
            for(int j=i; j<n; j++){
                subtotal+=h[j];
                if(height.count(subtotal) == 0){
                    height[subtotal] = 1;
                }else{
                    height[subtotal]++;
                }
            }
        }
        for(int i=0; i<m; i++){
            int subtotal=0;
            for(int j=i; j<m; j++){
                subtotal+=w[j];
                if(width.count(subtotal) == 0){
                    width[subtotal] = 1;
                }else{
                    width[subtotal]++;
                }
            }
        }
        
        int ans=0;
        for(auto pair:width){
            auto itr = height.find(pair.first);
            if(itr != height.end()){
                ans += itr->second*pair.second;
            }
        }
        cout << ans << endl;
    }
    return 0;
}