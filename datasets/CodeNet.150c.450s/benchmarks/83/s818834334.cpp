#include <iostream>

using namespace std;

typedef struct Goods_ {
    u_int value;
    u_int weight;
} Goods;

int main(void)
{
    u_int n, total;
    cin >> n >> total;
    Goods goods[n];
    for (u_int i = 0; i < n; i++) {
        u_int v, w;
        cin >> v >> w;
        goods[i] = Goods{v, w};
    }

    u_int values[total+1];
    for (u_int i = 0; i <= total; i++)
        values[i] = 0;
    
    for (u_int i = 0; i < n; i++) {
        Goods g = goods[i];
        for (u_int w = total; w >= g.weight; w--) {
            auto temp = g.value + values[w - g.weight];
            if (!values[w] || values[w] < temp)
                values[w] = temp;
        }
    }

    cout << values[total] << endl;
    
    return 0;
}