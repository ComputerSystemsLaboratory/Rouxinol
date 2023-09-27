#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
#if 0
    // ??\??? cin ?????\????????? 'xxx.txt' ?????????
    //std::ifstream in("alds1_4_a.txt");
    std::ifstream in("ALDS1_4_A-in8.txt");
    std::cin.rdbuf(in.rdbuf());
#else
#endif
    

    int n;
    cin >> n;
    vector<int> s;
    for (int i = 0; i < n; i++)
    {
        int s_num;
        cin >> s_num;
        s.push_back(s_num);
    }

    int q;
    cin >> q;
    vector<int> t;
    for (int i = 0; i < q; i++)
    {
        int t_num;
        cin >> t_num;
        t.push_back(t_num);
    }

    int ttl = 0;
    vector<int>::iterator it_t;
    for (it_t = t.begin(); it_t != t.end(); it_t++)
    {
        vector<int>::iterator it_s;
        for (it_s = s.begin(); it_s != s.end(); it_s++)
        {
            // cout << *it_s << "/" << *it_t << endl;
            bool is_found = false;
            if(*it_s == *it_t)
            {
                ttl++;
                //cout << *it_s << "/" << *it_t << endl;
                is_found = true;
            }
            if(is_found)
            {
                break;
            }
        }
    }

    cout << ttl << endl;
        


    return 0;
}