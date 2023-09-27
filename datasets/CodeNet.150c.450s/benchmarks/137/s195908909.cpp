#include <cassert>
#include <cstdio>
#define SIZE 244140625

int Hash(const char* c)
{
    int Hash = 0;
    while(1){
        Hash *= 5;
        switch(*c){
        case 'A':
            Hash += 1; break;
        case 'C':
            Hash += 2; break;
        case 'G':
            Hash += 3; break;
        case 'T':
            Hash += 4; break;
        default:
            return Hash;
        }
        ++c;
    }
}
int main()
{
    bool* dic = new bool[SIZE];
    int n;
    std::scanf("%d", &n);
    char command[7];
    char str[13];
    for(int i = 0; i < n; ++i){
        std::scanf("%s %s", command, str);
        if(command[0] == 'i'){
            dic[Hash(str)] = true;
        }else
        if(command[0] == 'f'){
            std::puts((dic[Hash(str)] ? "yes" : "no"));
        }
    }
    return 0;
 }