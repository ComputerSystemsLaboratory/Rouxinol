#include <iostream>
const int first = 100000;
int round_up(int price) // 1000円未満を切り上げ
{
    if (price%1000 == 0) {
        return price;
    }
    int complement  = 1000 - price%1000; // 補数
    return (price + complement);
}
int get_dept(int n) // n週間後
{
    int dept = first;
    for (int i=0; i<n; i++) {
        dept += dept * 0.05;
        dept = round_up(dept);
    }
    return dept;
}
int main()
{
    int n;
    std::cin  >> n;
    std::cout << get_dept(n) << std::endl;
}