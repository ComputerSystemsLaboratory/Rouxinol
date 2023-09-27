#include<iostream>
#include<set>
#include<string>
#include<algorithm>

using namespace std;

int solve(string str)
{
    int size = str.size();

    set<string> ans{};
    for(int i = 1; i < size; i++)
    {
        string front = str.substr(0, i);
        string back = str.substr(i);

        string r_front = front;
        string r_back = back;

        reverse(r_front.begin(), r_front.end());
        reverse(r_back.begin(), r_back.end());


        ans.insert(front + back);        
        ans.insert(back + front);        
        ans.insert(front + r_back);        
        ans.insert(r_back + front);        
        ans.insert(r_front + back);        
        ans.insert(back + r_front);        
        ans.insert(r_front + r_back);        
        ans.insert(r_back + r_front);        

    }

    return ans.size();
}

int main()
{
    int n{ 0 };
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string str{ "" };
        cin >> str;
        cout << solve(str) << endl;
    }

    return 0;
}