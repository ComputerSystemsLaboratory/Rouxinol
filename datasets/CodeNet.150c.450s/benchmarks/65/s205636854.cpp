#include <iostream>

class Card
{
    public:
    char mark;
    int num;
};

void bubble_sort(Card R[],int n);
void selection_sort(Card R[],int n);
void print(Card R[],int n);
bool check_stable(Card R1[],Card R2[],int n);

int main(int argc, char const *argv[])
{
    Card C1[40],C2[40];
    int n;

    std::cin >> n;

    for(int i = 0;i < n;i++){
        std::cin >> C1[i].mark >> C1[i].num;
        C2[i].mark = C1[i].mark;
        C2[i].num = C1[i].num;
    }

    bubble_sort(C1,n);
    print(C1,n);
    if(check_stable(C1,C2,n)) std::cout << "Stable" << std::endl;
    else std::cout << "Not stable" << std::endl;

    selection_sort(C2,n);
    print(C2,n);

    for(int i = 0;i < n;i++){
        if(C1[i].mark != C2[i].mark){
             std::cout << "Not stable" << std::endl;
             break;
        }
        
        if(i == n - 1) std::cout << "Stable" << std::endl;
    } 

    return 0;
}

void bubble_sort(Card R[],int n){
    for(int i = 0;i < n - 1;i++){        
        for(int j = n - 1;j > i;j--){
            if(R[j].num < R[j-1].num){
                Card tmp = R[j];
                R[j] = R[j-1];
                R[j-1] = tmp;
            }
        }
    }
}

void selection_sort(Card R[],int n){
    for(int i = 0;i < n - 1;i++){
        int minj = i;
        
        for(int j = i + 1;j < n;j++){
            if(R[j].num < R[minj].num) minj = j;
        }
        
        Card tmp = R[i];
        R[i] = R[minj];
        R[minj] = tmp;
    }

}

void print(Card R[],int n){
    for(int i = 0;i < n;i++){
            if(i != n - 1) std::cout << R[i].mark << R[i].num << " ";
            else std::cout << R[i].mark << R[i].num << std::endl;
    }
}

bool check_stable(Card in[],Card out[],int n){
    for(int i = 0;i < n;i++){
        for(int j = i+ 1;j < n;j++){
            for(int a = 0;a < n;a++){
                for(int b = a + 1;b < n;b++){
                    if((in[i].num == in[j].num) && (in[i].mark == out[b].mark) && ((in[i].num == out[b].num)) && (in[j].mark == out[a].mark) && ((in[j].num == out[a].num))) return false;
                }
            }
        }
    }

    return true;
}
