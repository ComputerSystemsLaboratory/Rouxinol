#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <set>
#include <vector>

std::vector<std::size_t> prime_table = {2};

void make_prime_table()
{
    std::set<std::size_t> undefined_table;
    for(std::size_t i = 3; i <= 999999; i += 2)
    {
        undefined_table.insert(i);
    }

    const std::size_t sn = 1000;
    for(std::size_t p = 0; !undefined_table.empty() && p < prime_table.size(); ++p)
    {
        for(auto u = undefined_table.begin(); u != undefined_table.end();)
        {
            if(0 == *u % prime_table[p])
            {
                u = undefined_table.erase(u);
            }
            else
            {
                ++u;
            }
        }

        if(!undefined_table.empty())
        {            
            prime_table.push_back(*undefined_table.begin());
            undefined_table.erase(undefined_table.begin());
            if(sn <= prime_table.back())
            {
                break;
            }
        }
    }
    prime_table.insert(prime_table.end(), undefined_table.begin(), undefined_table.end());
}

std::array<std::size_t, 1000000> prime_acc = {{0, 0}};

void make_prime_acc()
{
    std::size_t acc_found = 1;
    for(auto p = prime_table.begin(); p != prime_table.end(); ++p)
    {
        std::fill_n(prime_acc.begin() + acc_found + 1, *p - acc_found - 1, prime_acc[acc_found]);
        acc_found = *p;
        prime_acc[acc_found] = prime_acc[acc_found - 1] + 1;
    }
    std::fill(prime_acc.begin() + acc_found + 1, prime_acc.end(), prime_acc[acc_found]);
}

int main()
{
    make_prime_table();
    make_prime_acc();

    std::size_t n;

    while(std::cin >> n, !std::cin.eof())
    {
        std::cout << prime_acc[n] << std::endl;
    }
}