#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
#include <list>
#include <cstring>
#include <stack>
   
using namespace std;

int find(vector<int> r, int a)
{
    // cout << a << endl;
    int left = 0, right = r.size();
    while(right - left > 1){
        int mid = (left + right) / 2;
        // cout << mid << endl;
        if(r[mid] < a) left = mid;
        else right = mid;
    }
    // cout << right << endl;
    return right;
}

int main()
{
    int n;
    cin >> n;
    int a[100001];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> result;
    for(int i = 0; i < n; i++){
        int l = result.size();
        if(l == 0 || result[l - 1] < a[i]){
            result.push_back(a[i]);
        } else if(a[i] <= result[0]){
            result[0] = a[i];
        } else {
            int tmp = find(result, a[i]);
            result[tmp] = a[i];
        }
        // for(int j = 0; j < result.size(); j++){
        // cout << result[j] << " ";
        // }
        // cout << endl;
    }
    cout << result.size() << endl;
    return 0;
}