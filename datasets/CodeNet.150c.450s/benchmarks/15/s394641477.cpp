#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int n, q;
    vector<int> S, T;
    vector<int>::iterator itr, itr2;
    int i;
    int input;
    int result = 0;
    
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> input;
        S.push_back(input);
    }
    
    sort(S.begin(), S.end());
    
    cin >> q;
    for(i = 0; i < q; i++){
        cin >> input;
        T.push_back(input);
    }
    
    sort(T.begin(), T.end());
    
//    for(itr = S.begin(); itr != S.end(); itr++) cout << *itr << " ";
    
    itr = S.begin();
    itr2 = T.begin();
    
    while(true){
        if(*itr == *itr2){
            result++;
            itr2++;
            if(itr2 == T.end()) break;
        }else if(*itr < *itr2){
            itr++;
            if(itr == S.end()) break;
        }else if(*itr > *itr2){
            itr2++;
            if(itr2 == T.end()) break;
        }
    }
    
    cout << result << endl;
    return 0;
}