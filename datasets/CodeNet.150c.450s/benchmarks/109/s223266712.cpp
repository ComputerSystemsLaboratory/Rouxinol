#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <string>
#include <map>
using namespace std;

int ChangeTimesFormat(string str){
    int h = atoi(str.substr(0,2).c_str());
    int m = atoi(str.substr(3,2).c_str());
    int s = atoi(str.substr(6,2).c_str());
    int time = h*60*60+m*60+s;
    return time;
}

int main(){
    int n;
    while(cin>>n&&n!=0){
        // ðkeyÆµÄA»ÌÉ­Ë·éñÔÌ,·éñÔÌð²×é
        map<int,pair<int,int> > m;
        for(int i = 0; i < n; i++){
            string from;
            string to;
            cin>>from>>to;
            int ft=ChangeTimesFormat(from);
            int tt=ChangeTimesFormat(to);
            m[ft].first++;
            m[tt].second++;
        }
        // ñÔÌÅå
        int maxLine=0;
        // »ÝcÁÄ¢éÌñÔÌ
        int cnt=0;
        // Ì¢Ô©çµÄ¢­
        for(map<int,pair<int,int> >::iterator it = m.begin(); it!=m.end(); it++){
            // ©¦ÁÄ«½ñÔðo^
            cnt+=it->second.second;
            // o­·éñÔÌÌûª½¢ÈçÎ
            if(cnt<it->second.first){
                maxLine+=it->second.first-cnt;
                cnt=0;
            }
            else{
                cnt-=it->second.first;
            }
        }
        cout<<maxLine<<endl;
    }
    return 0;
}