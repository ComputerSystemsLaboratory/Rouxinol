#include <iostream>
using namespace std;
int ball[11];

bool bfs(int b, int c, int sum){
    if(sum == 10){
        return true;
    }
    if(b < ball[sum]){
        return bfs(ball[sum], c, sum+1);
    }
    if(c < ball[sum]){
        return bfs(b, ball[sum], sum + 1);
    }
    if(c > ball[sum] && b > ball[sum]){
        return false;
    }
}
int main(void){
    int n;
    cin >> n;
    for(int i=0; i<n ;i++){
        for(int j=0;j<10;j++){
            cin >> ball[j];
        }
        if(bfs(0, 0, 0)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}