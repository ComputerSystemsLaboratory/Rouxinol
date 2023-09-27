#include <iostream>
#include <vector>

using namespace std;

int main(void) {
        vector<int> a;
        int tmp;
        int j = 0;

        while(1) {
                cin >> tmp;
                a.push_back(tmp);
                if(a[j] == 0) {
                        break;
                }
                j++; 
        }
        for(int i = 0; i < a.size() - 1; i++) {
                cout << "Case " << i + 1 << ": "<< a[i] << endl;
}
        return 0;
        
}