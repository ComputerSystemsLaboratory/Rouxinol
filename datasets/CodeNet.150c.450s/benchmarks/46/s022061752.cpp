#include <iostream>
#include <queue>

using namespace std;

int main(){

    int n, x;
    int sum;
    int cnt = 0;
    queue<int> result;
    while(true){
        cin >> n >> x;
        if(n == 0 && x == 0){
            break;
        }
        cnt  = 0;
        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                for(int k=j+1; k<=n; k++){
                    sum = 0;
                    sum = i+j+k;
                    if(sum == x) cnt++;
                }
            }
        }
        result.push(cnt);
    }

    int length = result.size();
    for(int i=0; i<length; i++){
        cout << result.front() << endl;
        result.pop();
    }

    return  0;
}