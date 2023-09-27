#include <bits/stdc++.h>
using namespace std;

int ma(string s, int a){
    vector<int> dic;
    for(int i=0; i<a; i++){
        if(i >= s.size()){
            dic.push_back(0);
        }
        else{
            dic.push_back(s[i] - '0');
        }
    }

    sort(dic.begin(),dic.end(),greater<int>());

    int ans = 0;

    for(int i=0; i<a; i++){
        int kake = 1;
        int cnt = a-i;
        while(cnt > 1){
            cnt--;
            kake *= 10;
        }

        ans += dic[i]*kake;
    }

    return ans;
}

int mi(string s, int a){
    vector<int> dic;
    for(int i=0; i<a; i++){
        if(i >= s.size()){
            dic.push_back(0);
        }
        else{
            dic.push_back(s[i] - '0');
        }
    }

    sort(dic.begin(),dic.end());

    int ans = 0;

    for(int i=0; i<a; i++){
        int kake = 1;
        int cnt = a-i;
        while(cnt > 1){
            cnt--;
            kake *= 10;
        }

        ans += dic[i]*kake;
    }
    
    return ans;

}

int main(){
    while(1){
        int a;
        string s;
        cin>>s>>a;
        if(s[0] == '0' && a == 0) break;
        set<string> lis;
        map<string,int> idx;
        string pre = s;
        idx[pre] = 0;
        lis.insert(s);
        int cnt = 1;
        int ans;
        
        while(1){
            int high = ma(pre,a);
            int low = mi(pre,a);

            string in = to_string((high-low));

            if(lis.count(in)){
                pre = in;
                break;
            }
            lis.insert(in);
            pre = in;
            idx[pre] = cnt;
            cnt++;
            
        }

        cout<<idx[pre]<<" "<<pre<<" "<<(cnt - idx[pre])<<endl;
    }

    return 0;
    
}
