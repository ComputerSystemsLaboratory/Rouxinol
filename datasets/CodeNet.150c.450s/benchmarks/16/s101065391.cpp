#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size(),sum=0,land[25000]={},area = 0;
    stack<int> dis;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(s[i]=='\\') dis.push(i);
        else if(s[i]=='/'){
            if(!dis.empty()){
                land[i]++;
                land[dis.top()]++;
                for(int j=dis.top()+1;j<i;j++) land[j]+=2;
                dis.pop();
            }
        }
    }
    for(int i=0;i<n;i++){
        area += land[i];
        if(land[i]==1&&s[i]=='/'){
            ans.push_back(area/2);
            sum += area/2;
            area = 0;
        }
    }
    int b = ans.size();
    cout << sum << endl;
    if(b==0){
        cout << 0 << endl;
        return 0;
    } 
    cout << b <<' ';
    for(int i=0;i<b-1;i++) cout << ans[i] << ' '; 
    cout << ans[b-1] << endl;
}
