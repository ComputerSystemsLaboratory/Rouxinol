#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    int a[4];
    int b[4];
    
    while((scanf("%d", &a[0])) != EOF){
        int hitcount = 0;
        int bcount   = 0;
        
        for(int i = 1; i < 4; i++){
            scanf("%d", &a[i]);
        }
        
        for(int i = 0; i < 4; i++)
            cin >> b[i];
        
        //a???????????????????????????????´????b????????¢??¢?´¢
        for(int i = 0; i < 4; i++){
            int x = a[i];
            for(int j = 0; j < 4; j++){
                if(x == b[j]){
                    if(i == j) hitcount++;
                    else bcount++;
                }
            }
        }
        
        cout << hitcount << " " << bcount << endl;
    }
    
    return 0;
}