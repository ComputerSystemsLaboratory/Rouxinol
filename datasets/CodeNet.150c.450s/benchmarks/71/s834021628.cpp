#include<iostream>
using namespace std;

int n[50];

int main(){
    int input = 0;
    while(cin >> n[input]){
        if(n[input] == EOF) break;
        input++;
    }
    for(int h = 0; h < input; h ++){
        int c = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                for (int k = 0; k < 10; k++)
                {
                    if (n[h] - (i + j + k) >= 0 && n[h] - (i + j + k) < 10)
                        c++;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
