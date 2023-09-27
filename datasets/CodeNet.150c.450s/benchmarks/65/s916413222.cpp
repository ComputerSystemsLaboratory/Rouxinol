#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <cstdio>
#include <utility>
#include <climits>
#include <algorithm>
#include <queue>
#include <set>

using namespace std;

int cnt = 0;

vector<string> BubbleSort(vector<string> a){
    for(int i=0;i<a.size()-1;i++){
        for(int j=a.size()-1;j>=i+1;j--){
            if(a[j][1]-'0' < a[j-1][1]-'0'){
                swap(a[j],a[j-1]);
            }
        }
    }
    return a;
}
vector<string> SelectionSort(vector<string> a){
    int mini;
    for(int i=0;i<a.size();i++){
        mini = i;
        for(int j=i;j<a.size();j++){
            if(a[j][1]-'0' < a[mini][1]-'0'){
                mini = j;
            }
        }
        swap(a[i],a[mini]);
    }
    return a;
}



int main(void){
    int n;
    cin >> n;
    vector<string>c(n),a,b;
    for(int i=0;i<n;i++)
        cin >> c[i];
    
    b = BubbleSort(c);
    for(int i=0;i<n;i++){
        cout << b[i];
        if(i!=n-1)cout << " ";
    }
    cout << endl;
    cout << "Stable" << endl;
    
    a = SelectionSort(c);
    bool f = false;
    for(int i=0;i<n;i++){
        cout << a[i];
        if(a[i]!=b[i])f=true;
        if(i!=n-1)cout << " ";
    }
    cout << endl;
    if(f)cout << "Not stable" << endl;
    else cout << "Stable" << endl;
    
    
    return 0;
}