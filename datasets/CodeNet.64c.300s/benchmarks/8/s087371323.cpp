#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<stack>
#include<climits>
#include<cstring>
#include<queue>
using namespace std;
typedef long long ll;

const int INF = INT_MAX/3;

int main(){
    int n;
    cin >> n;

    for(int i=1;i<n+1;i++){
        if(i%3 == 0){
            cout << " " << i;
            continue;
        }

        int x = i;
        while(x){
            if(x%10 == 3){
                cout << " " <<i;
                break;
            }
            x /= 10;
        }
    }
    cout << endl;
    return 0;
}