#include <iostream>
using namespace std;

void Show_message(char button, int num)
{
  switch(button)
  {
    case '1':
      switch(num % 5)
      {
        case 1:
          cout << '.'; break;
        case 2:
          cout << ','; break;
        case 3:
          cout << '!'; break;
        case 4:
          cout << '?'; break;
        case 0:
          cout << ' '; break;
      }
      break;
    case '2':
      switch(num % 3)
      {
        case 1:
          cout << 'a'; break;
        case 2:
          cout << 'b'; break;
        case 0:
          cout << 'c'; break;
      }
      break;
    case '3':
      switch(num % 3)
      {
        case 1:
          cout << 'd'; break;
        case 2:
          cout << 'e'; break;
        case 0:
          cout << 'f'; break;
      }
      break;
    case '4':
      switch(num % 3)
      {
        case 1:
          cout << 'g'; break;
        case 2:
          cout << 'h'; break;
        case 0:
          cout << 'i'; break;
      }
      break;
    case '5':
      switch(num % 3)
      {
        case 1:
          cout << 'j'; break;
        case 2:
          cout << 'k'; break;
        case 0:
          cout << 'l'; break;
      }
      break;
    case '6':
      switch(num % 3)
      {
        case 1:
          cout << 'm'; break;
        case 2:
          cout << 'n'; break;
        case 0:
          cout << 'o'; break;
      }
      break;
    case '7':
      switch(num % 4)
      {
        case 1:
          cout << 'p'; break;
        case 2:
          cout << 'q'; break;
        case 3:
          cout << 'r'; break;
        case 0:
          cout << 's'; break;
      }
      break;
    case '8':
      switch(num % 3)
      {
        case 1:
          cout << 't'; break;
        case 2:
          cout << 'u'; break;
        case 0:
          cout << 'v'; break;
      }
      break;
    case '9':
      switch(num % 4)
      {
        case 1:
          cout << 'w'; break;
        case 2:
          cout << 'x'; break;
        case 3:
          cout << 'y'; break;
        case 0:
          cout << 'z'; break;
      }
      break;
  }
}

int main(void)
{
  int n;
  cin >> n;
  char buf_ch;
  cin >> noskipws;
  cin >> buf_ch;
  for (int i = 0; i < n; ++i)
  {
    while (true)
    {
      cin >> buf_ch;
      if (buf_ch == '\n') break;
      if (buf_ch == '0') continue;

      int sum = 1;
      char button = buf_ch;
      while (true)
      {
        cin >> buf_ch;
        if (buf_ch == '0')
        {
          Show_message(button, sum);
          break;
        }
        else
        {
          ++sum;
        }
      }
    }
    cout << endl;
  }
  return 0;
}