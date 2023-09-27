#include <iostream>
#include <vector>
using namespace std;



int main (int argc, char const* argv[]){
    int n,i;
    int array[100] = {};
    int max=0;
    vector<int> elems;
    
    //各整数の取得
    while((cin >> n)){
        array[n-1] += 1;
    }
    //cout << array[2]<< endl;
    
    //最頻値を求める
    for(i=0; i<100; i++){
        if(max < array[i]){
            max = array[i];
        }
    }
    //最頻値の整数全てを取得
    for(i=0;i<100;i++){
        if(max == array[i]){
            elems.push_back(i+1);
        }
    }
    
    //最頻となる整数を出力
    for(i=0;i<elems.size();i++){
        cout << elems[i] << endl;
    }
    
    return 0;
}