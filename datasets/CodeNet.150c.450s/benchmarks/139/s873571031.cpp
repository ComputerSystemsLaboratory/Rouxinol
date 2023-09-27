#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
#include <map>

namespace
{
  struct Room
  {
    int cost = 1000000;
    int mejirushi = -1;
    bool fixed = false;
  };
  static std::array<Room, 200001> rooms = {};

  static std::array<std::vector<int>, 200001> way = {};
}

namespace ABC168
{

  class D
  {
  public:
    D() = default;
    ~D() = default;


    void Run()
    {

      int N = 0;
      int M = 0;
      std::cin >> N;
      std::cin >> M;

      std::vector<std::pair<int, int>> next_rooms = {};

      for (int i = 0; i < M; ++i)
      {
        int A, B;
        std::cin >> A;
        std::cin >> B;

        way[A].push_back(B);
        way[B].push_back(A);

        if (A == 1)
        {
          rooms[A].cost = 1;
          rooms[A].fixed = true;
          next_rooms.push_back(std::make_pair(A, B));
        }
        else if (B == 1)
        {
          rooms[B].cost = 1;
          rooms[B].fixed = true;
          next_rooms.push_back(std::make_pair(B, A));
        }
      }

      while (next_rooms.size() > 0)
      {
        std::vector<std::pair<int, int>> next_rooms_tmp = {};

        for (auto p : next_rooms)
        {
          auto& infoA = rooms[p.first];
          auto& infoB = rooms[p.second];

          if (!infoB.fixed) {
            infoB.cost = infoA.cost + 1;
            infoB.mejirushi = p.first;
            infoB.fixed = true;
          }

          for (auto w : way[p.second])
          {
            if (!rooms[w].fixed) {
              next_rooms_tmp.push_back(std::make_pair(p.second, w));
            }
          }
        }

        std::sort(next_rooms_tmp.begin(), next_rooms_tmp.end());
        auto itr = std::unique(next_rooms_tmp.begin(), next_rooms_tmp.end());
        next_rooms_tmp.erase(itr, next_rooms_tmp.end());

        next_rooms = next_rooms_tmp;
      }

      bool is_ok = true;
      for (int i = 1; i <= N; ++i)
      {
        if (!rooms[i].fixed) {
          is_ok = false;
          break;
        }
      }

      if (!is_ok)
      {
        std::cout << "No" << std::endl;
      }
      else
      {
        std::cout << "Yes" << std::endl;
        for (int i = 2; i <= N; ++i)
        {
          std::cout << rooms[i].mejirushi << std::endl;
        }
      }

    }
  };

}
int main()
{

  ABC168::D prob;
  prob.Run();

  return 0;
}


