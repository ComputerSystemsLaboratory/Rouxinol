#include <iostream>

int main() {
        int n, x;

        while(true){
                int cnt = 0;
                std::cin >> n >> x;
                if (n==0 && x==0) break;

                for(int i=1; i<=n-2; i++){
                        for(int j=i+1; j<=n-1; j++){
                                for(int k=j+1; k<=n; k++){
                                        if(i+j+k==x) cnt++;
                                }
                        }
                }
                std::cout << cnt << std::endl;
        }
}