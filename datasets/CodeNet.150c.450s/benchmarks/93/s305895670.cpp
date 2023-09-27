#define _USE_MATH_DEFINES

#include <array>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <utility>
#include <tuple>
#include <algorithm>
#include <limits>
#include <fstream>
#include <numeric>
#include <stack>
#include <queue>
#include <list>
#include <cstring>
#include <unordered_set>
#include <cmath>
#include <iomanip>

namespace
{
	template<int N>
	std::array<int, N> GetValue(std::istream& stream)
	{
		std::string buf;
		std::getline(stream, buf);

		std::stringstream sstr(buf);
		std::array<int, N> retval;

		for (int i = 0; i < N; ++i)
		{
			std::getline(sstr, buf, ' ');
			retval[i] = std::stoi(buf);
		}

		return retval;
	}

	std::vector<int> GetValue(std::istream& stream, int num, char delim)
	{
		std::string buf;
		std::getline(stream, buf);
		std::stringstream sstr(buf);

		std::vector<int> retval;
		retval.reserve(num);

		std::string input;;
		for (int i = 0; i < num && std::getline(sstr, input, delim); ++i)
		{
			retval.push_back(std::stoi(input));
		}

		return retval;
	}

	int GetValue(std::istream& stream)
	{
		int in;
		stream >> in;

		return in;
	}

	std::vector<std::string> GetValueString(std::istream& stream, int num, char delim)
	{
		std::string buf;
		std::vector<std::string> retval;
		retval.reserve(num);

		std::getline(stream, buf);
		std::stringstream sstr(buf);

		for (int i = 0; i < num && std::getline(sstr, buf, delim); ++i)
		{
			retval.push_back(std::move(buf));
		}

		return retval;
	}

	template<typename Itr>
	void PrintLine(Itr begin, Itr end)
	{
		bool first = true;

		for (int i = 0; begin != end; ++begin, ++i)
		{
			if (!first)
			{
				std::cout << ' ';
			}

			std::cout << (*begin);

			first = false;
		}
		std::cout << std::endl;
	}

	template<typename T>
	void Print(const std::vector<T>& sequence)
	{
		for (const auto& e : sequence)
		{
			std::cout << e << '\n';
		}

		std::cout << std::flush;
	}

	template<typename T>
	int Partition(T* sequence, int first, int last)
	{
		const T pivot = sequence[last];
		int large_index = first;

		for (int i = first; i < last; ++i)
		{
			if (sequence[i] <= pivot)
			{
				std::swap(sequence[large_index], sequence[i]);
				++large_index;
			}
		}

		std::swap(sequence[large_index], sequence[last]);

		return large_index;
	}

	template<typename T>
	void QuickSort(T* sequence, int first, int last)
	{
		if (first < last)
		{
			int index = Partition(sequence, first, last);
			QuickSort(sequence, first, index - 1);
			QuickSort(sequence, index + 1, last);
		}
	}

	struct Card
	{
		char picture;
		int num;
		Card()
			: Card('\0', std::numeric_limits<int>::max())
		{}
		Card(char p, int n)
			: picture(p)
			, num(n)
		{}
	};

	bool operator<=(const Card& lhs, const Card& rhs)
	{
		return lhs.num <= rhs.num;
	}

	bool operator==(const Card& lhs, const Card& rhs)
	{
		return lhs.picture == rhs.picture &&
			lhs.num == rhs.num;
	}

	bool operator!=(const Card& lhs, const Card& rhs)
	{
		return !(lhs == rhs);
	}

	template<typename T>
	void Merge(T* seq, int left, int mid, int right)
	{
		static const int kMaxSize = 500000;
		static T LEFT[kMaxSize / 2 + 2];
		static T RIGHT[kMaxSize / 2 + 2];

		int left_num = mid - left;
		int right_num = right - mid;

		for (int i = 0; i < left_num; ++i)
		{
			LEFT[i] = seq[left + i];
		}
		for (int i = 0; i < right_num; ++i)
		{
			RIGHT[i] = seq[mid + i];
		}
		LEFT[left_num] = T();
		RIGHT[right_num] = T();

		int left_index = 0;
		int right_index = 0;
		for (int i = left; i < right; ++i)
		{
			if (LEFT[left_index] <= RIGHT[right_index])
			{
				seq[i] = LEFT[left_index++];
			}
			else
			{
				seq[i] = RIGHT[right_index++];
			}
		}
	}

	template<typename T>
	void MergeSort(T* seq, int left, int right)
	{
		if (1 < right - left)
		{
			int mid = (left + right) / 2;
			MergeSort(seq, left, mid);
			MergeSort(seq, mid, right);
			Merge(seq, left, mid, right);
		}
	}
}

int main(int argc, char* argv[])
{
	auto file = (argc == 1) ? std::ifstream() : std::ifstream(argv[1]);
	std::istream& stream = (argc == 1) ? std::cin : file;
	if (argc == 1)
	{
		std::cin.tie(0);
		std::ios::sync_with_stdio(false);
	}

	int num = GetValue<1>(stream)[0];
	//Card* quick = new Card[num];
	//Card* merge = new Card[num];
	std::vector<Card> quick;
	for (int i = 0; i < num; ++i)
	{
		Card card;
		stream >> card.picture;
		stream >> card.num;
		//merge[i] = quick[i];
		quick.push_back(card);
	}
	std::vector<Card> merge = quick;

	QuickSort(&quick[0], 0, num - 1);
	MergeSort(&merge[0], 0, num);

	bool stable = true;
	for (int i = 0; i < num; ++i)
	{
		if (quick[i] != merge[i])
		{
			stable = false;
			break;
		}
	}
	if (stable)
	{
		std::cout << "Stable\n";
	}
	else
	{
		std::cout << "Not stable\n";
	}
	for (int i = 0; i < num; ++i)
	{
		std::cout << quick[i].picture << ' ' << quick[i].num << '\n';
	}
	std::cout << std::flush;
}

