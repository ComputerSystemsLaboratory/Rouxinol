#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    int n;
    while(cin >> n && n){
        multimap<int,bool> m;
        int ret=0,hh,mm,ss,tmp;

        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                cin >> hh;
                cin.ignore();
                cin >> mm;
                cin.ignore();
                cin >> ss;
                tmp = hh * 3600 + mm * 60 + ss;
                if(j == 0){
                    m.insert(make_pair(tmp, true));
                }else{
                    m.insert(make_pair(tmp, false));
                }
            }
        }
        multimap<int,bool>::iterator it = m.begin(),jt;
        tmp = 0;
        while(it != m.end()){
            if((*it).second){
                tmp++;
            }else{
                tmp--;
            }
            jt = it;
            ++jt;
            if(jt == m.end() || (*jt).first != (*it).first){
                ret = max(ret, tmp);
            }
            ++it;
        }
        cout << ret << endl;
    }
}