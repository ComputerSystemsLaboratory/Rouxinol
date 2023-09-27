#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <map>
#include <deque>
#include <map>
#include <set>
#include <queue>
#include <stack>

using namespace std;

int main() {
    

    int n;
    cin >> n;
    vector <int> a;
    for (int i=0;i<n;i++){
        int p;
        cin >> p;
        a.push_back(p);
    }
    vector <int>::iterator p;
    for (p=a.end();p!=a.begin()+1;){
        p--;
        cout << *p << " ";
    }
    cout << *a.begin() << endl;


}
