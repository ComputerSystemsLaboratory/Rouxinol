#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
#include<map>
using namespace std;

void bubbleSort(vector<string> &v){
    int size = v.size(), i;
    bool changed = true;
    while(changed){
        changed = false;
        for(i = 0; i < size-1; i++){
            if((int)v[i].at(1) > (int)v[i+1].at(1)){
                string tmp = v[i];
                v[i] = v[i+1];
                v[i+1] = tmp;
                changed = true;
            }
        }
    }
}
void selectionSort(vector<string> &v){
    int size = v.size(), i, j, min;
    for(i = 0; i < size; i++){
        min = i;
        for(j = i; j < size; j++){
            min = (int)v[j].at(1) < (int)v[min].at(1) ? j : min;
        }
        if(i != min){
            string tmp = v[i];
            v[i] = v[min];
            v[min] = tmp;
        }
    }
}

void print(vector<string> &v){
    int i = 0;
    vector<string>::iterator ite = v.begin();
    while(ite != v.end()){
        if(i++ != 0)
            cout << " ";
        cout << *ite;
        ite++;
    }
    cout << endl;
}

bool isStable(map<int, string> &org, vector<string> &sorted){
    map<int, string>::iterator ite = org.begin();
    string s;
    vector<string>::iterator ites = sorted.begin();
    while(ites != sorted.end()){
        s.append(*ites);
        ites++;
    }
    while(ite != org.end()){
        string sub = (*ite).second;
        if(sub.size() >= 4 && s.find(sub) == string::npos){
            return false;
        }
        ite++;
    }
    return true;
}

void printStable(bool isStable){
    if(isStable)
        cout << "Stable" << endl;
    else
        cout << "Not stable" << endl;
}

int main(){
    int n, i;
    string s;
    vector<string> v;
    map<int, string> m;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> s;
        v.push_back(s);
        m[atoi(&(s.at(1)))].append(s);
    }
    vector<string> v2(v);
    bubbleSort(v2);
    print(v2);
    printStable(isStable(m, v2));
    selectionSort(v);
    print(v);
    printStable(isStable(m, v));
    return 0;
}