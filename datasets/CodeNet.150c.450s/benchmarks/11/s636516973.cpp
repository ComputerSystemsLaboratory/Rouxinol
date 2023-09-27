#include <iostream>
                 
void show_ret(int cards[], char mark) {
    for(int i = 1; i < 14; i ++) {
        if(cards[i] == 0) std::cout << mark << " " << i << std::endl;
    }            
}

int main(int argc, char *argv[]) {
    int spade[14] = {0};
    int heart[14] = {0};
    int clab[14] = {0};
    int dia[14] = {0};
    int n, num = 0;
    char mark;  
     
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::cin >> mark >> num;
        switch(mark) {
            case 'S':
                spade[num] = 1;
                break;
            case 'H':
                heart[num] = 1;
                break;
            case 'C':
                clab[num] = 1;
                break;
            case 'D':
                dia[num] = 1;
                break;
        }
    } 
    show_ret(spade, 'S');
    show_ret(heart, 'H');
    show_ret(clab, 'C');
    show_ret(dia, 'D');
    return 0;
}