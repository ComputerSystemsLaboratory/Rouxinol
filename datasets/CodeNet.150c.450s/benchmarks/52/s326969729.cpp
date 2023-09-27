#include <bits/stdc++.h>
 
using namespace std;
 
#define rep(i, n) for(int i = 0; i < n; i++){
const int INF = 1 << 25;
 
stack<int> cars;
int numbar;
 
int main(){
    while(scanf("%d", &numbar) != EOF){
        if(numbar == 0){
            printf("%d\n", cars.top());
            cars.pop();
            continue;
        }
        cars.push(numbar);
    }
    return 0;
}