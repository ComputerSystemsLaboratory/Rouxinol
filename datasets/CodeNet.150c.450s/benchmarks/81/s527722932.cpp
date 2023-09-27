#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    
    vector<int> x(10);
    x[0] = 0;
    x[1] = 1;
    for(int i = 0; i < 9; i++){
        x[i+1] = x[i] * 2 + 1;
    }
    int y = x[9] * 2 + 1;

    while(true){
        int n;
        cin >> n;
        if(n == 0)
            break;
        

        vector<int> r(y, -1);
        vector<int> t(10, 0);
        int ans;
        int anst;
        
        for(int i = 0; i < 10; i++)
            r[ x[i]+x[i] ] = 0;
        
        for(int i = 0; i < n; i++){
            int a, b, c;
            cin >> a >> b >> c;
            r[ x[a]+x[b] ] = c;
        }
        
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if( r[x[i]+x[j]] == -1 )
                    continue;
                for(int k = 0; k < 10; k++){
                    if( r[x[i]+x[k]] == -1 )
                        continue;
                    if( r[x[j]+x[k]] == -1 || r[x[j]+x[k]] > r[x[i]+x[j]] + r[x[i]+x[k]] )
                        r[x[j]+x[k]] = r[x[i]+x[j]] + r[x[i]+x[k]];
                }
            }
        }
        
        for(int i = 0; i < 10; i++){
            
            for(int j = 0; j < 10; j++){
                if( r[x[i]+x[j]] == -1 ){
                    continue;
                }
                else{
                    t[i] += r[x[i]+x[j]];
                }
            }
            
            if( i == 0 ){
                ans = i;
                anst = t[i];
            }
            else if( t[i] < anst && t[i] > 0 ){
                ans = i;
                anst = t[i];
            }
        }
        
        cout << ans << " " << anst <<endl;
        
    }
}