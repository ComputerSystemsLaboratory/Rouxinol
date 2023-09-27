#include <iostream>
#include <unordered_set>
#include <string>
#include <cstdlib>
#include <utility>

using namespace std;


int main() {
    typedef unordered_set<string> set_t;
    set_t A;
    int n;
    cin >> n;
    string order, word;
    
    for(int i = 0; i< n; i++)
    {
        cin >> order >> word;
        if(order=="insert")
        {
            A.insert(word);
        }
        else if(order=="find")
        {
            if(A.count(word) > 0)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
        
    }
    
    return 0;
}