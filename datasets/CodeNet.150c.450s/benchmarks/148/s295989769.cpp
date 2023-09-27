#include <bits/stdc++.h>
using namespace std;

#define print cout <<
#define printl(s) cout << s << endl;
#define rep(i,n) for (int i = 0; i < (n); ++i)

template <typename T>
vector<T> getValues(int num){
    vector<T> values(num);
    for(int i=0;i<num;i++){
        cin >> values.at(i);
    }
    return values;
}

int main(){
    int N;
    cin >> N;

    auto inputs = getValues<string>(N);
    int ac = 0;
    int wa = 0;
    int tle = 0;
    int re = 0;
    rep(i,inputs.size()){
      if(inputs.at(i)=="AC"){
        ac++;
      }else if(inputs.at(i)=="WA"){
        wa++;
      }else if(inputs.at(i)=="TLE"){
        tle++;
      }else if(inputs.at(i)=="RE"){
        re++;
      }
    }
    print "AC x ";
    printl(ac);
    print "WA x ";
    printl(wa);
    print "TLE x ";
    printl(tle);
    print "RE x ";
    printl(re);
}
