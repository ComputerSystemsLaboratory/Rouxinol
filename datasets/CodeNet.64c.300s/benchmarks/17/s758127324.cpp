#include<iostream>
using namespace std;

int calcMaxPrice(int tax_before, int tax_after, int price);
int calcTax(int tax, int price);

int main(void)
{
    int tax_before, tax_after, price;

    int max_price;

    while (cin >> tax_before >> tax_after >> price && tax_before > 0) {
        max_price = calcMaxPrice(tax_before, tax_after, price);
        cout << max_price << endl;
    }
    
    return 0;
}

int calcMaxPrice(int tax_before, int tax_after, int price)
{
    int max_price = 0;
    for (int one_price = 1; one_price < price; one_price++) {
        for (int other_price = 1; other_price < price; other_price++) {
            if(calcTax(tax_before, one_price)+ calcTax(tax_before, other_price) == price) {
                int price_after = calcTax(tax_after,one_price) + calcTax(tax_after, other_price);
                if (price_after > max_price) {
                    max_price = price_after;
                }
            }
        }
    }

    return max_price;
}

int calcTax(int tax, int price)
{
    return price * (100 + tax) / 100;
}