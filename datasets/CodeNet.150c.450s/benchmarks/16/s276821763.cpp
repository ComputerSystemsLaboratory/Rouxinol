#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
int main(){
        string s;
        stack<int> decline;
        stack<pair<int, int>> water;
        cin>>s;
        for(int i=0;i<s.size();i++){
                if(s[i]=='\\') decline.push(i);
                else if(s[i]=='/') {
                        if(decline.empty()) continue;
                        int start = decline.top(); decline.pop();
                        int watermass = i-start;
                        while(!water.empty()){
                                pair<int,int> tmp = water.top();
                                if(tmp.first>start){
                                        water.pop();
                                        watermass += tmp.second;
                                }else break;
                        }
                        water.push(make_pair(start, watermass));
                }
        }
        int watermass = 0;
        int n_water = water.size();
        vector<int> r;
        while(!water.empty()){
                r.push_back(water.top().second);
                watermass += water.top().second;
                water.pop();
        }
        cout<<watermass<<endl;
        cout<<n_water;
        for(int i=n_water-1;i>=0;i--){
                cout<<" "<<r[i];
        }
        cout<<endl;
        return 0;
}
