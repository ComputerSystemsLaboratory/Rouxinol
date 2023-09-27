#include <iostream>
#include <cstring>

int main ()
{

  std::string taro;
  std::string hanako;
  int n;

  int score_taro = 0;
  int score_hanako = 0;
  
  std::cin >> n;
  
  while(n--)
	{
	  std::cin >> taro;
	  std::cin >> hanako;
	  
	  if (taro > hanako)
		{
		  score_taro += 3;
		}
	  else if (taro < hanako)
		{
		  score_hanako += 3;
		}
	  else
		{
		  score_taro += 1;
		  score_hanako += 1;
		}
	}
  std::cout << score_taro << ' ' << score_hanako << std::endl;

  return 0;
  
}