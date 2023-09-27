#include<iostream>
#include<vector>

using namespace std;

int main(void){
    vector<int> v;
    int i,j;
    v.push_back(2);
    for(i = 3;i < 1000000;i++){
        for(j = 0;j < v.size();j++){
            if(i%v[j] == 0) break;
            if(v[j]*v[j] > i){
                v.push_back(i);
                break;
            }
        }
    }
    while(true){
        int a,d,n;
        cin >> a >> d >> n;
        if(!a) break;
        for(i = 0;i < v.size();i++){
            if((v[i]-a)%d == 0 && v[i] >= a){
                n--;
                if(!n){
                    cout << v[i] << endl;
                    break;
                }
            }
        }
    }
}