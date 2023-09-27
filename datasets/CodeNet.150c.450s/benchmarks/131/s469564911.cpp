#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    string s,t;
    int n;
    while(cin>>s>>n&&n!=0){
        map<string,int>mp;
        int cnt = 0;
        while((int)s.size()!=n){
            s.push_back('0');
        }
        mp[s] = 0;
        string z;
        for(int i=0;i<n;i++){
            z.push_back('0');
        }
        while(1){
            sort(s.begin(),s.end());
            int mi=0;
            int ma=0;
            for(int i=0;i<n;i++){
                mi*=10;
                mi+=s[i]-'0';
            }
            for(int i=n-1;i>=0;i--){
                ma*=10;
                ma+=s[i]-'0';
            }
            t = to_string(ma-mi);
            while((int)t.size()!=n){
                t = "0" +t;
            }
            cnt++;
            if(mp.find(t)!=mp.end()){
                cout << mp[t] << " ";
                bool flag = 1;
                if(t!=z){
                for(int i=0;i<t.size();i++){
                    if(flag){
                        if(t[i]!='0'){
                            flag = 0;
                            cout << t[i];
                        }
                    }else{
                        cout << t[i];
                    }
                }
                }else{
                    cout << "0";
                }
                cout << " " << cnt-mp[t] << endl;
                break;
            }else{
                s = t;
                mp[s] = cnt;
            }
        }
    }
    return 0;
}
