#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>

using namespace std;


int main() {
    string word;
    stack<int> s;
    while(cin >> word)
    {
        if(word=="+")
        {
            int rem = s.top();
            s.pop();
            rem += s.top();
            s.pop();
            s.push(rem);
        }
        else if(word=="-")
        {
            int rem = s.top();
            s.pop();
            rem -= s.top();
            s.pop();
            rem *= -1;
            s.push(rem);
        }
        else if(word=="*")
        {
            int rem = s.top();
            s.pop();
           rem *= s.top();
            s.pop();
            s.push(rem);
        }
        else
        {
            s.push(atoi(word.c_str()));
        }
        
    }
    cout << s.top() << endl;
    
    return 0;
}