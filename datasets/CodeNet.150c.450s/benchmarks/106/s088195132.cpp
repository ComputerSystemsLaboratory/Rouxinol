#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<stack>
#include<climits>
#include<cstring>
#include<queue>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> divisor;
    for(int i=1;i<c+1;i++){
        if(c%i == 0){
            divisor.push_back(i);
        }
    }
    int S = 0;
    for (int i=a;i<b+1;i++){
        for(int j=0;j<divisor.size();j++){
            if(i == divisor[j]){
                S++;
                break;
            }
        }
    }
    cout << S << endl;
    return 0;
}