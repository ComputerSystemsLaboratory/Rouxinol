#include <iostream>

int main(int argc, char const* argv[])
{
  int count = 0,hoken,max,answer,temp,now_buy;
  std::cin >> count;
  std::cin >> now_buy;
  max = now_buy;
  answer = max - now_buy;
  for(int i = 0;i < count - 1 ; i++)
  {
    std::cin >> temp;
    if(i == 0 && now_buy > temp)
    {
      hoken = now_buy;
      now_buy = temp;
      answer = now_buy - hoken;
      continue;
    }
    if(answer < 0 && now_buy > temp)
    {
      hoken = now_buy;
      now_buy = temp;
      if(answer < now_buy - hoken)
      {
        answer = hoken - now_buy;
      }
      continue;
    }
    if(now_buy > temp)
    {
      now_buy = temp;
    }
    else if(answer < temp - now_buy)
    {
      answer = temp - now_buy;
    }
  }
  std::cout << answer << std::endl;
  return 0;
}