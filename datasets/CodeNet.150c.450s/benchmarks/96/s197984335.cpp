#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

void make_table(std::vector<std::vector<char> > &table) {
    int i;
    int j;
    table[1].push_back(46); 
    table[1].push_back(44); 
    table[1].push_back(33); 
    table[1].push_back(63); 
    table[1].push_back(32); 
    for (i = 2; i <= 7; i++) {
        for (j = 0; j <= 2; j++) {
            table[i].push_back(97 + 3 * (i - 2) + j); 
        }
    }
    table[7].push_back(115);
    for (i = 8; i <= 9; i++) {
        for (j = 0; j <= 2; j++) {
            table[i].push_back(116 + 3 * (i - 8) + j); 
        }
    }
    table[9].push_back(122);
}

int main(void) {
    int n;
    std::string s;
    const char* c;
    char now_num;
    int now_count;
    std::vector<std::vector<char> >  table(10, std::vector<char>());
    make_table(table);

    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> s;
        c = s.c_str();
        now_count = 0;
        now_num = c[0];
        //std::cout << "SSIZE = " << s.size() << std::endl;
        for (int j = 0; j < s.size(); j++) {
            if (c[j] == now_num) {
                now_count++;
            } else {
                if (c[j] == '0') {
                    //std::cout << "C = " << c[j] << std::endl;
                    //std::cout << "NUM = " << now_num << std::endl;
                    //std::cout << "COUNT = " << now_count << std::endl;
                    int amari = now_count % table[(int)now_num - 48].size() - 1;
                    if (amari == -1) {
                        amari += table[(int)now_num - 48].size();
                    }
                    std::cout << table[(int)now_num - 48][amari];
                }
                if (j != s.size() - 1) {
                    now_num = c[j];
                }
                now_count = 1;
            }
        }
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}