#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <ctype.h>
#include <algorithm>
#include <cmath>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)
#define cube(x) (x) * (x) * (x)

const int INF = 1e9;

using namespace std;

vector<string> selection_sort(vector<string> s){
    int n = s.size();
    vector<int> a;
    REP(i, n)
        a.push_back(atoi(s[i].substr(1, 1).c_str()));

    REP(i, n){
        int mini = i;
        for(int j = i; j < n ; j++){
            if(a[j] < a[mini])
                mini = j;
        }
        if(i != mini){
            swap(a[i], a[mini]);
            swap(s[i], s[mini]);
        }
    }
    return s;
}

vector<string> bubble_sort(vector<string> s) {
    int n = s.size();
    vector<int> a;
    REP(i, n)
        a.push_back(atoi(s[i].substr(1, 1).c_str()));

    REP(i, n)
        for(int j = n - 1; j > i; j--)
            if(a[j] < a[j-1]){
                swap(a[j], a[j-1]);
                swap(s[j], s[j-1]);
            }

    return s;
}

int find(vector<string> target, string query){
    int i = 0;
    vector<string>::iterator iter = target.begin();
    while(iter != target.end()){
        if (*iter == query)
            break;
        i++;
        iter++;
    }

    return i;
}

int main() {
    int n;
    cin >> n;
    vector<string> a;
    string str;
    REP(i, n) {
        cin >> str;
        a.push_back(str);
    }
    vector<string> b, s;
    b = bubble_sort(a);
    s = selection_sort(a);

    REP(i, n-1) {
        cout << b[i] << " ";
    }

    cout << b[n-1] << endl << "Stable" << endl;
    REP(i, n-1) {
        cout << s[i] << " ";
    }

    cout << s[n-1] << endl;
    bool stable = true;
    REP(i, n){
        REP(j, i){
            if((s[j].substr(1,1) == s[i].substr(1,1)) && ((find(a, s[j]) - find(a, s[i])) > 0)){
                stable = false;
                break;
            }
        }
    }

    if(stable)
        cout << "Stable" << endl;
    else
        cout << "Not stable" << endl;


    return 0;
}