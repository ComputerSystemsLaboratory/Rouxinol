#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> selection(vector<string> vStr) {
    vector<string> vRet = vStr;
    int mini;
    for (int i = 0; i < vRet.size(); i++) {
        mini = i;
        for (int j = i; j < vRet.size(); j++) {
            if ( (vRet[j])[1] < (vRet[mini])[1] ) mini = j;
        }
        swap(vRet[i], vRet[mini]);
    }
    return vRet;
}

vector<string> bubble(vector<string> vStr) {
    vector<string> vRet = vStr;
    for (int i = 0; i < vRet.size(); i++) {
        for (int j = vRet.size()-1; j >= i+1; j--) {
            if ( (vRet[j])[1] < (vRet[j-1])[1] ) swap(vRet[j], vRet[j-1]);
        }
    }
    return vRet;
}

bool isStable(vector<string> in, vector<string> out) {
    int n = in.size();
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int a = 0; a < n; a++) {
                for (int b = a+1; b < n; b++) {
                    if ( ( (in[i])[1] == (in[j])[1] ) && ( in[i] == out[b] ) && ( in[j] == out[a]) ) return false;
                }
            }
        }
    }
    return true;
}

int main() {
    int n;
    vector<string> vStr;
    vector<string> bubbled;
    vector<string> selected;
    string temp;
//    int stability = 1;
    bool stability_b;
    bool stability_s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        vStr.push_back(temp);
    }
    bubbled = bubble(vStr);
    selected = selection(vStr);

    //Stability check
    stability_b = isStable(vStr, bubbled);
    stability_s = isStable(vStr, selected);

    for (int i = 0; i < n; i++) {
        cout << bubbled[i];
        if (i != n-1) cout << " ";
    }
    cout << endl;
    // Print stability
    if (stability_b) cout << "Stable";
    else cout << "Not stable";
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << selected[i];
        if (i != n-1) cout << " ";
    }
    cout << endl;
    // Print stability
    if (stability_s) cout << "Stable";
    else cout << "Not stable";
    cout << endl;

    return 0;
}