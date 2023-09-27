#include<iostream>
#include<string>
#include<algorithm>
#include<functional>
#include<bitset>
#include<iomanip>
#include<vector>
#include<set>
#include<map>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;


struct dice{
    int top, bottom, center, back, right, left;
};

int main(){
    dice a;
    cin >> a.top >> a.center >> a.right >> a.left >> a.back >> a.bottom;
    int n;
    cin >> n;
    while(n--){
        int t, c;
        cin >> t >> c;
        if(t == a.left){
            int tmp = a.top;
            a.top = a.left;
            a.left = a.bottom;
            a.bottom = a.right;
            a.right = tmp;
        }
        if(t == a.right){
            int tmp = a.top;
            a.top = a.right;
            a.right = a.bottom;
            a.bottom = a.left;
            a.left = tmp;
        }
        while(t != a.top){
            int tmp = a.top;
            a.top = a.center;
            a.center = a.bottom;
            a.bottom = a.back;
            a.back = tmp;
        }
        while(c != a.center){
            int tmp = a.center;
            a.center = a.right;
            a.right = a.back;
            a.back = a.left;
            a.left = tmp;
        }
        cout << a.right << endl;
    }
}
