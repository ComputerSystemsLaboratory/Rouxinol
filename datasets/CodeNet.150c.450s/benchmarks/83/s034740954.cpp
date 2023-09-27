#include <iostream>

using namespace std;

typedef struct Goods_ {
    u_int value;
    u_int weight;
} Goods;

void bubble_sort(Goods *goods, u_int n)
{
    for (u_int i = 0; i < n; i++)
        for (u_int j = i+1; i < n; i++)
            if (goods[i].value < goods[j].value)
                swap(goods[i], goods[j]);
}

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

    bubble_sort(goods, n);

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