/* include file*/
#include <functional>
#include <vector>
using namespace std;

template <class Monoid>
struct Segment
{
    using Func = function<Monoid(Monoid,Monoid )>;

    vector<Monoid> node;
    Monoid ide;
    int n = 1;

    Func bin_f;
    Func update_f;

    Segment(const vector<Monoid> &init, Monoid ide_, Func f_,Func u_f) : bin_f(f_),ide(ide_),update_f(u_f)
    {
        int sz = init.size();
        while (n < sz)
            n *= 2;
        node.assign(n * 2 - 1, ide);
        for (int i = 0; i < sz; i++)
            node[i + n - 1] = init[i];
        for (int i = n - 2; i >= 0; i--)
            node[i] = bin_f(node[i * 2 + 1], node[i * 2 + 2]);
    }

    void update(int i, Monoid x)
    {
        i += n - 1;
        node[i] = update_f(node[i],x);
        while (i)
        {
            i = (i - 1) / 2;
            node[i] = bin_f(node[i * 2 + 1], node[i * 2 + 2]);
        }
    }

    Monoid get_inter(int a, int b, int k = 0, int l = 0, int r = -1)
    {
        if (r < 0)
            r = n;
        if (a <= l && r <= b)
            return node[k];
        if (r <= a || b <= l)
            return ide;

        Monoid lm = get_inter(a, b, k * 2 + 1, l, (l + r) / 2);
        Monoid rm = get_inter(a, b, k * 2 + 2, (l + r) / 2, r);
        return bin_f(lm, rm);
    }
};

#include <iostream>

int main()
{
    int n;
    int q;
    cin >> n >> q;

    typedef long long i64;

    Segment<i64> seg(vector<i64>(n + 1, 0), 0,
                     [](i64 a,i64 b) {
                         return a + b;
                     },
                     [](i64 a,i64 b){
                         return a + b;
                     });
   for(int i = 0;i < q;i++)
   {
       int query;
       cin >> query;
       if(query == 0)
       {
           int x,y;
           cin >> x >> y;
           seg.update(x,y);
       }
       else
       {
           int x,y;
           cin >> x >> y;
           cout << seg.get_inter(x,y + 1) << endl;
       }
   } 
}
