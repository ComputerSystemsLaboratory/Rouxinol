#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int size;
    cin >> size;
    int mat[size];
    for(int i=0;i<size;i++){
        cin >> mat[i];
    }
    int max_value=mat[1]-mat[0];
    int min_value=mat[0];
    for(int i=1;i<size;i++){
        max_value=max(max_value,mat[i]-min_value);
        min_value=min(min_value,mat[i]);
    }
    cout<<max_value<<endl;
    return 0;
}