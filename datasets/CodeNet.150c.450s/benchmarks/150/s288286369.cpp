#include <bits/stdc++.h>
using namespace std;

vector<int> countingSort(vector<int> &array,int n,int max){
    vector<int> count_array(max+1,0);
    for(int i=0;i<n;i++){
        int x = array.at(i);
        count_array.at(x) ++;
    }
    /*for(int i=0;i<=max;i++){
        cout << count_array.at(i) << " ";
    }
    cout << endl;*/
    for(int i=1;i<=max;i++){
        count_array.at(i) = count_array.at(i) + count_array.at(i-1);
    }
    /*for(int i=0;i<=max;i++){
        cout << count_array.at(i) << " ";
    }
    cout << endl;*/
    vector<int> arr(n);
    for(int i=n-1;i>=0;i--){
        int num = array.at(i);
        //cout << num << endl;
        int idx = count_array.at(num);
        arr.at(idx-1) = num;
        count_array.at(num)--;
        //cout << count_array.at(num) << endl;
    }
    return arr;
}

int main(){
    int n;
    cin >> n;
    vector<int> array(n);
    for(int i=0;i<n;i++) cin >> array.at(i);
    int max = -1;
    for(int i=0;i<n;i++){
        if(max<array.at(i)){
            max = array.at(i);
        }
    }
    vector<int> arr = countingSort(array,n,max);
    for(int i=0;i<n;i++){
        cout << arr.at(i);
        if(i != n-1){
            cout << " ";
        }else{
            cout << endl;
        }
    } 
}
