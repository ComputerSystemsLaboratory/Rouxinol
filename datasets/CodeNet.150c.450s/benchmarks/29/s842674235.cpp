#include <iostream>
#include <list>
using namespace std;
int main(void){
    // Your code here!
    list<int> int_list;
    
    int n;
    cin >> n;
    
    string str;
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        
        if(str == "insert")
        {
            int x;
            cin >> x;
            
            int_list.push_front(x);
        }
        else if(str == "delete")
        {
            int x;
            cin >> x;
            
            for(auto itr = int_list.begin(); itr != int_list.end(); ++itr)
            {
                if(*itr == x)
                {
                    int_list.erase(itr);
                    break;
                }
            }
        }
        else if(str == "deleteFirst")
        {
            int_list.pop_front();
        }
        else if(str == "deleteLast")
        {
            int_list.pop_back();
        }
        else
        {
        }
    }
    
    int count = 0;
    for(auto x : int_list)
    {
        if(count != 0)
        {
            cout << " ";
        }
        cout << x;
        count++;
    }
    cout << endl;
    return 0;
}

