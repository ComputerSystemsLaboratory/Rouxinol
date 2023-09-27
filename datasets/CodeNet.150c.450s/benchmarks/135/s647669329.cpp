#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>

#define fin cin

using namespace std;

int n = 0, m = 0;
vector<int> h;
vector<int> w;

template<typename Vec>
void push_sum(Vec &v, int size)
{
    for(unsigned i = 0; i < size; i++){
        int num = v[i];

        unsigned sub = i + 1;
        while(sub < size)
        {
            num += v[sub];
            v.push_back(num);
            sub++;
        }
    }
}

int main()
{
//    ifstream fin("in.txt");

    while(fin >> n >> m, n | m)
    {

        h.clear();
        w.clear();

        h.shrink_to_fit();
        w.shrink_to_fit();

        

        int tmp = 0;
        for(int i = 0; i < n; i++)
        {
            fin >> tmp;
            h.push_back(tmp);
        }
        for(int i = 0; i < m; i++)
        {
            fin >> tmp;
            w.push_back(tmp);
        }

        push_sum(h, n);
        push_sum(w, m);


        int ans = 0;
        short h_val[1000 * 1500 + 1] = {};
        short w_val[1000 * 1500 + 1] = {};

        //sort(h.begin(), h.end());
        //sort(w.begin(), w.end());

        for(unsigned i = 0; i < h.size(); i++)
        {
            h_val[(h[i])]++;
        }
        for(unsigned i = 0; i < w.size(); i++)
        {
            w_val[(w[i])]++;
        }
        for(int i = 0; i < 1000 * 1500 + 1; i++)
        {
            ans += (h_val[i] * w_val[i]);
        }
        

        cout << ans << endl;

    }
    return 0;
}