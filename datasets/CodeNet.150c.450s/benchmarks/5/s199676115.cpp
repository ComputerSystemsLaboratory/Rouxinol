#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int n;
    vector<int> a;
    int i;
    int a_i;
    vector<int>::iterator itr;
    
    cin >> n;
    
    
    for(i = 0; i < n; i++){
        cin >> a_i;
        a.push_back(a_i);
        
    }
    
    reverse(a.begin(), a.end());
    itr = a.begin();
    while(true){
        cout << *itr;
        itr++;
        if(itr == a.end()) break;
        cout << " ";
    }
    
    cout << endl;
    
    return 0;
}