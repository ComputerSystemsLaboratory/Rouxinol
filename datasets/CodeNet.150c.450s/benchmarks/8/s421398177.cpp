#include <cstdio>
#include <string>

using namespace std;

int main(void){
    char taro_tmp[500], hanako_tmp[500];
    string taro, hanako;
    int n, p_taro, p_hanako;
  
    p_taro = p_hanako = 0;

    scanf(" %d", &n);
    
    for (int i = 0; i < n; i++){
        scanf(" %s %s", taro_tmp, hanako_tmp);
        taro = taro_tmp;
        hanako = hanako_tmp;

        if (taro > hanako){
            p_taro += 3;
        }
        else if (taro < hanako){
            p_hanako += 3;
        }
        else if (taro == hanako){
            p_hanako++;
            p_taro++;
        }   
    }
    
    printf("%d %d\n", p_taro, p_hanako);
    
    return 0;
}
