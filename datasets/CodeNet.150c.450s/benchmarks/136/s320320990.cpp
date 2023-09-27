#include <bits/stdc++.h>

int main(){
    long long a,b,temp,cobai[50],coyaku[50],i=0,clm;

    while (std::cin){
        std::cin >> a >> b;
        clm = a*b;

        if (a<b){
            std::swap(a,b);
        }

        while (b!=0){
            temp = b;
            b = a%b;
            a = temp;
        }
        coyaku[i] = a;
        cobai[i]  = clm/a;
        i++;
    }
    for (int j=0;j<i-1;j++){
        std::cout << coyaku[j] << " " << cobai[j] << std::endl;
    }
}