#include<iostream>

using namespace std;

int main()
{
    while(1){
      int ans = 0;
      int N;
      cin>>N;

      if(N == 0){
        break;
      }

      int temp,sum;
      for(int i = 1;i<= N/2;++i){
        temp = i;
        sum = i;

        while(1){
          ++temp;
          sum += temp;

          if(sum == N){
            ++ans;
            break;
          }
          else if(sum > N){
            break;
          }
          else{
            continue;
          }
        }
      }
      cout<<ans<<endl;
    }
    return 0;
}
