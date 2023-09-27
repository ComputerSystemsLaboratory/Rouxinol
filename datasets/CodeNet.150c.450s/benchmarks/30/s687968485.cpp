#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    vector<int> data(a);
    for(int k = 0; k < a; k++){
        cin>>data[k];
    }
    int swap = 0;
    for(int i = 0; i < a; i++){
        int minj = i;
        for(int j = i; j < a; j++){
            if(data[j] < data[minj]){
                minj = j;
//                swap++;
            }
        }
        if(data[minj] != data[i]){
            int tmp = data[minj];
            data[minj] = data[i];
            data[i] = tmp;
            swap++;
        }
//        swap(data[minj], data[i]);
    }
    for(int i = 0; i < a; i++){
        cout<<data[i];
        if(i != a-1){
            cout<<" ";
        }else{
            cout<<endl;
        }
    }
    cout<<swap<<endl;
}
