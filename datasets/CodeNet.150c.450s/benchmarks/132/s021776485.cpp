#include<iostream>
#include<vector>
using namespace std;


int main(){
    int N,P;
    while(cin>>N>>P, N != 0 && P != 0){
        vector<int> stone(N,0);
        int p = P-1;//ｐは椀の中の石の数
        stone[0]++;
        int i = 0;
        while(stone[i] != P){
            i = (i+1)%N;
            if(p > 0){
                stone[i]++;
                p--;
            }
            else if(stone[i] != 0){
                swap(p,stone[i]);
            }
        }
        cout<<i<<endl;
    }

}

