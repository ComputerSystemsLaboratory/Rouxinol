
//Nayeem Shahriar Joy ,Applied Physics And Electronic Engineering , University of Rajshahi.

  #include <iostream>
  #include <cstdio>
  #include <algorithm>
 
  using namespace std;
 
  char data[1000000];
 
  int main(void)
  {
    int n;
    int max = 0;
     
    while (scanf("%d", &n) != EOF){
        data[n]++;
    }
     
    for (int i = 0; i < 1000000; i++){
         
        if (data[i] > max){
            max = data[i];
        }
    }
    for (int i = 0; i < 1000000; i++){
        if (data[i] == max){
            printf("%d\n", i);
        }
    }
     
    return (0);
}