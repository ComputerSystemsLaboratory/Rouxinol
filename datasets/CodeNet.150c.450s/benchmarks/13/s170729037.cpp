#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> vc;
    char c;
    while(1)
    {
        cin.get(c);
        if(c == '\n')
        {
            break;
        }
        vc.push_back(c);
    }
    vector<char> vt;
    while(1)
    {
        cin.get(c);
        if(c == '\n')
        {
            break;
        }
        vt.push_back(c);
    }
    bool chk = false;
    for(int i = 0;i < vc.size();i++)
    {
        if(vc.at(i) == vt.at(0))
        {
            vector<char> vp;
            for(int j = 0;j < vt.size();j++)
            {
                if((i + j) < vc.size())
                {
                    vp.push_back(vc.at(i + j));
                }
                else
                {
                    vp.push_back(vc.at(i + j - vc.size()));
                }
            }
            bool chkt = true;
            for(int j = 0;j < vt.size();j++)
            {
                if(vt.at(j) != vp.at(j))
                {
                    chkt = false;
                }
            }
            if(chkt != false)
            {
                chk = true;
            }
        }
    }
    if(chk != false)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}