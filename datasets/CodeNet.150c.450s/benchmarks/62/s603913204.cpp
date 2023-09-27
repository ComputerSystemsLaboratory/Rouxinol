#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
        vector<int> a(3,0);
        
        for(int i = 0; i < 3; i++) {
                cin >> a[i];
        }

//      sort(a.begin(), a.end(), greater<int>());
        sort(a.begin(), a.end());

        for(int i = 0; i < a.size() - 1; i++) {
                cout << a[i] << " ";
        }
        cout << a.back() << endl;       
                
        return 0;
}