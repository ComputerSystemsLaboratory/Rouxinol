#include <iostream>
#include <string>

using namespace std;

#define ONE 1
 
int c[128];
 
void c2i(){
    c['i'] = 1;   c['x'] = 10;
    c['c'] = 100; c['m'] = 1000;
}
 
int main(){
    string s1,s2;
    int n;
     
    c2i();
     
    cin >> n;
    while(n--){
        int n1 = 0,n2 = 0,k;
        cin >> s1 >> s2;
        bool flg = false;
        for(int i = 0 ; i < s1.size() ; i++){
            if('0' <= s1[i] && s1[i] <= '9'){
                flg = true;
                k = s1[i] - '0';
                continue;
            }
            else{
                if(flg){
                    n1 += k*c[s1[i]];
                    flg = false;
                }
                else n1 += c[s1[i]];
            }
        }
 
        int l;
        for(int j = 0 ; j < s2.size() ; j++){
            if('0' <= s2[j] && s2[j] <= '9'){
                flg = true;
                l = s2[j] - '0';
                continue;
            }
            else{
                if(flg){
                    n2 += l*c[s2[j]];
                    flg = false;
                }
                else n2 += c[s2[j]];
            }
        }
         
        int sum = n1 + n2;
         
        int ans[4] = {0};
        while(sum){
            if(sum >= 1000){
                ans[0]++;
                sum -= 1000;
            }
            else if(sum >= 100){
                ans[1]++;
                sum -= 100;
            }
            else if(sum >= 10){
                ans[2]++;
                sum -= 10;
            }
            else{
                ans[3] = sum;
                sum = 0;
            }
        }
 
        char fig[4] = {'m','c','x','i'};
        for(int i = 0 ; i < 4 ; i++){
            if(ans[i] > ONE) cout << ans[i] << fig[i];
            else if(ans[i] == ONE) cout << fig[i];
        }
        cout << endl;
    }
    return 0;
}