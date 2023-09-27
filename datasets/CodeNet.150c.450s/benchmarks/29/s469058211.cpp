#include<algorithm>
#include<climits>
#include<cmath>
#include<iomanip>
#include<iostream>
#include<list>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<utility>
#include<vector>
 
#define lint long long
#define VI vector<int>
#define VL vector<lint>
#define VC vector<char>
#define VVI vector<vector<int>>
#define rep(i, n) for(int i = 0 ; i < n ; i++)
#define SORT(c) sort((c).begin(), (c).end())
#define SORT_INV(c) sort((c.begin(), c.end(), greater<int>())
#define IINF INT_MAX
#define LLINF LLONG_MAX
 
using namespace std;
 
int main(){
    list<int> data;
    list<int>::iterator itr, l;
    int q;
    cin >> q;
    string cd;
    int key;
    rep(i, q){
        cin >> cd;
        if(cd == "insert"){
            cin >> key;
            data.push_front(key);
        }else if(cd == "delete"){
            cin >> key;
            for(itr = data.begin(), l = data.end() ; itr != l ; ++itr){
                if(*itr == key){
                    data.erase(itr);
                    break;
                }
            }
        }else if(cd == "deleteFirst"){
            data.pop_front();
        }else{
            data.pop_back();
        }
    }
    for(itr = data.begin(), l = --data.end() ; itr != l ; ++itr){
        cout << *itr << " ";
    }
    cout << *itr << endl;
    return 0;
}
