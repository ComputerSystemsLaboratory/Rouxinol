#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int k;

    while(cin >> n >> k, n != 0 || k != 0){
        vector<int> data;
        int sum = 0;
        for(int i=1; i<=n; i++){
            int tmp;
            cin >> tmp;
            data.push_back(tmp);
        }
        for(int i=0; i<k; i++){
            sum += data[i];
        }
        int max = sum;
        for(int i=k; i<data.size(); i++){
            sum -= data[i-k];
            sum += data[i];
            if(sum > max) max = sum;
        }
        cout << max << endl;
    }
    return 0;
}