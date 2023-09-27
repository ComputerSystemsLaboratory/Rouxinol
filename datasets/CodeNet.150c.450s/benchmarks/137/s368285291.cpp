#include <unordered_set>
#include <iostream>
#include <string>

using namespace std;

int main(){
    long long n; cin >> n;
    unordered_set<string> dict;
    for(int i=0;i<n;i++){
        string method,element;
        cin >> method >> element;
        if(method == "insert"){
            dict.insert(element);
        } else {
            if (dict.count(element) >= 1)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }
}