#include <cstdint>
#include <vector>

using namespace std;

static size_t total;
static vector<size_t> stotal;
static vector<pair<size_t, size_t>> spuddles;
static size_t index;

void areas_on_cross_section_diagram_init()
{
  total = 0;
  index = 0;
  stotal.clear();
  spuddles.clear();
}

void areas_on_cross_section_diagram_add(char c)
{
  if (c == '/') {
    if (!stotal.empty()) {
      size_t old_index = stotal.back();
      stotal.pop_back();
      total += index - old_index;
      size_t puddle_size = index - old_index;
      while (!spuddles.empty() && (old_index < spuddles.back().first)) {
        puddle_size += spuddles.back().second;
        spuddles.pop_back();
      }
      spuddles.push_back(make_pair(old_index, puddle_size));
    }
  } else if (c == '\\') {
    stotal.push_back(index);
  } else {
  }
  index++;
}

size_t areas_on_cross_section_diagram_total()
{
  return total;
}

void areas_on_cross_section_diagram_areas(void (*callback)(size_t))
{
  for (int32_t i = 0; i < spuddles.size(); i++) {
    callback(spuddles[i].second);
  }
}

#if !defined(TEST)
#include <iostream>
static vector<size_t> areas;

static void callback(size_t size)
{
  areas.push_back(size);
}

int32_t main()
{
  areas_on_cross_section_diagram_init();

  char c;
  while (cin >> c) {
    if (cin.eof()) break;
    areas_on_cross_section_diagram_add(c);
  }

  size_t total = areas_on_cross_section_diagram_total();

  cout << total << endl;

  areas_on_cross_section_diagram_areas(callback);

  cout << areas.size();

  if (areas.size() != 0) {
    for (uint32_t i = 0; i < areas.size(); i++) {
      cout << ' ' << areas[i];
    }
  }

  cout << endl;
  return 0;
}

#endif