#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>
#include <cmath>
#include <stack>
#include <map>
#include <functional>
#include <queue>
using namespace std;

int64_t min(int64_t a,int64_t b) {
    if (a > b)
    {
        return b ;
    }else
    {
        return a ;
    }
}


int main(){
    int d ;
    cin >> d ;
    vector<int> c (26,0) ;
    for (int i = 0; i < 26; i++)
    {
        cin >> c.at(i) ;
    }
    vector<vector<int> > s(d,vector<int>(26)) ;
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < 26 ; j++)
        {
            cin >> s.at(i).at(j) ;
        }
        
    }
    vector<int> sc(d) ;
    for (int i = 0; i < d; i++)
    {
        cin >> sc.at(i) ;
    }
    
    vector<int>ans(0) ;
    vector<int64_t> score(0) ;
    int64_t snow = 0 ;
    vector<int> last(26,-1) ;
    for (int i = 0; i < d; i++)
    {
        int num = sc.at(i) ;
        ans.push_back(num) ;
        snow += s.at(i).at(num-1) ;
        last.at(num-1) = i ;
        for (int j = 0; j < 26; j++)
        {
            snow -= c.at(j) * (i - last.at(j)) ;
        }
        score.push_back(snow) ;
    }
    /*
    for (int i = 0; i < d; i++)
    {
        cout << ans.at(i) << endl ;
    }
    */
    for (int i = 0; i < d; i++)
    {
        cout << score.at(i) << endl ;
    }
    
}