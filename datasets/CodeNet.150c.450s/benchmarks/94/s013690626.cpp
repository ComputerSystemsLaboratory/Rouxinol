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

    int flag =1;
    int swap = 0;
    while(flag){
        flag = 0;
        for(int i = a-1; i >= 1; i--){
            if(data[i] < data[i-1]){
                int tmp = data[i];
                data[i] = data[i-1];
                data[i-1] = tmp;
                flag = 1;
                swap++;
            }
        }
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
    return 0;
}
