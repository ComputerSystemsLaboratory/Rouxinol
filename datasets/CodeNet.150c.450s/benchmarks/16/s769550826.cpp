#include <cstdio>
#include <stack>
#include <utility>
#include <vector>


int main()
{  
  // stack of slope index and char
  std::stack< std::pair<int, char> > slope_stack;
  // stack of pond volumes (index, volume)
  std::stack< std::pair<int, int> > volumes; 

  char slope; // type of slope
  int index = 0; // distance index
  
  while (scanf("%c", &slope) != EOF) {
    if (slope == '\\') {
      slope_stack.push(std::make_pair(index, slope));
    } else if (slope == '/') {
      if (!slope_stack.empty() && slope_stack.top().second == '\\') {
	int prev_index = slope_stack.top().first;
	int volume = index - prev_index; // volume of current horizontal
	slope_stack.pop();
	
	while (!volumes.empty() && volumes.top().first > prev_index) {
	  volume += volumes.top().second; // combine volumes
	  volumes.pop();
	}
	volumes.push(std::make_pair(index, volume));
      }
    }
    ++index;
  }

  std::vector < int > volumes2; // for printing in correct order
  int sum = 0; // sum of volumes
  
  while (!volumes.empty()) {
    int volume = volumes.top().second;
    sum += volume;
    volumes2.push_back(volume);
    volumes.pop();
  }

  printf("%d\n", sum);

  printf("%lu", volumes2.size());
  
  for (auto it = volumes2.rbegin(); it != volumes2.rend(); ++it) {
    printf(" %d", *it);
  }

  printf("\n");

}