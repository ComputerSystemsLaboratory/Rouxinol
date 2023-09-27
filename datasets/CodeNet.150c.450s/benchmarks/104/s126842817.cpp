#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <iomanip>
#include <functional>
#include <queue>
#include <stack>
#include <cmath>
#define INF 100000000
#define MOD 1000000007
using namespace std;


int main(){
    int w;
    cin >> w;
    int bo[w+1];
    for(int i=0; i<=w; i++){
        bo[i]=i;
    }
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        char c;
        int a,b;
        
        cin >> a >> c >> b;
        
        swap(bo[a],bo[b]);
    }
    
    for(int i=1; i<=w; i++){
        cout << bo[i]<<endl;
    }
    
    return 0;
}
