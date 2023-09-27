#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <numeric>
#include <array>
#include <cmath>
#include <memory>
#include <queue>
using namespace std;
//変数デバッグ
#define DEB(variable) cout << #variable << '=' << variable << endl

//for簡易表記(引数ミス防止)
#define FOR(LoopVariable,numberOFbegin,numberOFend) for (int LoopVariable = (numberOFbegin); (LoopVariable) < (numberOFend); (LoopVariable)++)
#define DEFOR(LoopVariable,numberOFbegin,numberOFend) for (int LoopVariable = (numberOFbegin)-1; (LoopVariable) >= (numberOFend); (LoopVariable)--)
#define REP(LoopVariable,numberOFend) for(int LoopVariable = 0;(LoopVariable)<(numberOFend);LoopVariable++)

constexpr long long int linf = numeric_limits<long long int>::max()-5;
constexpr int inf= numeric_limits<int>::max()-5;
constexpr long long int mod = 1000000007;



int main(){

    int n;
    vector<pair<string,string>> v;
    int result;
    while(cin>>n,n){
        v.resize(n);
        REP(i,n){
            cin>>v[i].first>>v[i].second;
        }

        sort(v.begin(),v.end());
   
        priority_queue< string,std::vector<string>,greater<string>> pq;
        pq.push(v[0].second);
        result = 1;

        /*
        REP(i,n){
            cout << v[i].first << " " << v[i].second << endl;
        }*/

        FOR(i,1,n){
            if(pq.top().compare(v[i].first)<=0){
                pq.pop();
                
            }else{
                result++;
           
            }
            pq.push(v[i].second);
        }
        cout << result << endl;
    }
    

    return 0;
}

