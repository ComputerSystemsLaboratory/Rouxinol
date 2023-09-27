#include <iostream>

/* 切り上げ */
void round_up(int *num, const int round_num)
{
    int fraction;  // 端数
    int tmp;
    
    tmp = *num;
    fraction = tmp % round_num;
    
    tmp /= round_num;
    if (fraction != 0){
        tmp++;
    }
    *num = tmp * round_num;
}

/* 借金額 */
int debt(const int amount, const int weeks)
{
    int ret;
    int round_num = 1000;  // 切り上げる基準の数
    
    ret = amount;
    for (int i = 0; i < weeks; i++){
        ret *= 1.05;  // 利子計算
        round_up(&ret, round_num);
    }
    
    return ret;
}

int main()
{
    int n;
    
    std::cin >> n;
    
    std::cout << debt(100000, n) << std::endl;
    
    return 0;
}