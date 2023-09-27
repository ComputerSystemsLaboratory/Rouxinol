#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    string S, T;
    int i, ans;
    int daytime[86402];
    cin >> n;
    while(n>0){
        fill(daytime,daytime+86402,0);
        for(i=0; i<n; i++){
            cin >> S >> T;
            daytime[((S[0]-'0')*10+(S[1]-'0'))*3600+((S[3]-'0')*10+(S[4]-'0'))*60+((S[6]-'0')*10+(S[7]-'0'))]++;
            daytime[((T[0]-'0')*10+(T[1]-'0'))*3600+((T[3]-'0')*10+(T[4]-'0'))*60+((T[6]-'0')*10+(T[7]-'0'))]--;
        }
        for(i=1; i<=86400; i++){
            daytime[i] += daytime[i-1];
        }
        ans=0;
        for(i=0; i<=86400; i++){
            ans = max(ans,daytime[i]);
        }
        cout << ans << endl;
        cin >> n;
    }
    return 0;
}
