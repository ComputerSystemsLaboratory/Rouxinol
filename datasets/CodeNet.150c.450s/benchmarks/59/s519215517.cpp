#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printVec(vector<int> &v){
    vector<int>::iterator ite = v.begin();
    int i = 0;
    while(ite != v.end()){
        if (i++ != 0){
            cout << " ";
        }
        cout << *ite;
        ite++;
    }
    cout << endl;
}

void insSort(int n, vector<int> &vec){
    int i, j, x;
    for(i = 1; i < n; i++){
        printVec(vec);
        x = vec[i];
        j = i - 1;
        while(j >= 0 && vec[j] > x){
            vec[j+1] = vec[j];
            vec[j--] = x;
        }
    }
    printVec(vec);
}

int main(){
    int x, m, i;
    i = 0;
    m = 0;
    vector<int> v, rv;
    while(cin >> x){
        if(i++ == 0){
            m = x;
            continue;
        }
        v.push_back(x);
        if(i-1 == m){
            break;
        }
    }
    insSort(m, v);
}