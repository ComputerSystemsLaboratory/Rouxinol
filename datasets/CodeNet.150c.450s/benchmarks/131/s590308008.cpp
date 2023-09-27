#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){
    while(1){
        int a,l;
        cin >> a >> l;
        if(l==0) break;

        vector<int> num(l);
        vector<int> res(21, -1);
        res[0] = a;
        for(int i=1; i<=20; i++){
            for(int j=0; j<l; j++){
                num[j] = a%10;
                a/=10;
            }
            sort(num.begin(), num.end());
            int big=0,small=0;
            for(int j=0; j<l; j++){
                big+=num[j]*pow(10,j);
                small+=num[l-1-j]*pow(10,j);
            }
            a=big-small;
            auto itr = find(res.begin(), res.end(), a);
            if(itr!=res.end()){
                int idx = distance(res.begin(), itr);
                cout << idx << " " << a << " " << i-idx << endl;
                break;
            }else{
                res[i] = a;
            }
        }
    }
    return 0;
}