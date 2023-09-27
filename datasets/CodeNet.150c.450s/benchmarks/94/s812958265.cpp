#include <iostream>
#include <iterator>
#include <sstream>
#include <string>

#include <set>
#include <list>
#include <unordered_map>
#include <vector>
#include <stack>
#include <queue>

#include <algorithm>
#include <utility>

using namespace std;
namespace patch
{
    template <typename T>
    string to_string(const T& n)
    {
        ostringstream stm;
        stm << n;
        return stm.str();
    }
    int stoi(string str)
    {
        int ret;
        istringstream stm(str);
        stm >> ret;
        if (stm.fail())
        {
            throw -1;
        }
        return ret; 
    }
    vector<string> split(const string &str)
    {
        istringstream stm(str);
        vector<string> ret;
        copy(istream_iterator<string>(stm),
            istream_iterator<string>(),
            back_inserter(ret));
        return ret;
    }
    vector<string> split(const string &str, char delim)
    {
        istringstream stm(str);
        vector<string> ret;
        string buf;
        while (getline(stm, buf, delim))
        {
            ret.push_back(buf);
        }
        return ret;
    }
}

int bubbleSort(vector<int>& vs)
{
    int end = vs.size();
    if (end == 1)
    {
        return 0;
    }
    int cnt = 0;
    for (int j = 0; j < end - 1; ++j)
    {
        for (int i = 0; i < end - j - 1; ++i)
        {
            if (vs[i] > vs[i+1])
            {
                swap(vs[i], vs[i+1]);
                ++cnt;
            }
        }
    } 
    return cnt;
}

// bubble sort
int main()
{
    ios::sync_with_stdio(false);

    // line 1
    string s1;
    getline(cin, s1);
    int n = patch::stoi(s1);

    // line 2
    vector<int> vs(n);
    vector<string> ss;
    string s2;
    getline(cin, s2);
    ss = patch::split(s2);
    for (int n = 0, sz = ss.size(); n < sz; ++n)
    {
        vs[n] = patch::stoi(ss[n]);
    }

    int cnt = bubbleSort(vs);
    
    bool isFirst = true;
    for (int n : vs)
    {
        //cout << n << " ";
        if (isFirst)
        {
            cout << n;
            isFirst = false;
        }
        else
        {
            cout << " " << n;
        }
    }
    cout << "\n";
    cout << cnt << "\n";
    
    
    return 0;
}