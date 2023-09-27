#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define MAX_LEN 50000
#define BIG 2000000000

class MergeSort
{
private:
	vector<pair<int, char> > tmp;
	void merge(vector<pair<int, char> > &data, int l, int m, int h)
	{
		for (int i = l; i < h; ++i)
			tmp[i] = data[i];

		int i = l, j = m, idx = l;
		while (i < m && j < h)
		{
			if (tmp[i].first <= tmp[j].first)
				data[idx++] = tmp[i++];
			else
				data[idx++] = tmp[j++];
		}

		while (i < m) data[idx++] = tmp[i++];
		while (j < h) data[idx++] = tmp[j++];
	}

	void do_sort(vector<pair<int, char> > &data, int l, int h)
	{
		if (l < h - 1)
		{
			int m = l + (h - l) / 2;
			do_sort(data, l, m);
			do_sort(data, m, h);
			merge(data, l, m, h);
		}
	}

public:
	void sort(vector<pair<int, char> > &data)
	{
		tmp.assign(data.begin(), data.end());
		do_sort(data, 0, data.size());
	}
};
class QuickSort
{
private:
	int partition1(vector<pair<int, char> > &data, int l, int h)
	{
		pair<int, char> tmp = data[h];
		while (l < h)
		{
			while (l < h && data[l].first <= tmp.first) l++;
			if (l < h) data[h--] = data[l];

			while (l < h && data[h].first >= tmp.first) h--;
			if (l < h) data[l++] = data[h];
		}
		data[l] = tmp;

		return l;
	}

	int partition2(vector<pair<int, char> > &data, int l, int h)
	{
		pair<int, char> tmp = data[h];

		int i = l;
		for (int j = l; j <= h; ++j)	{
			if (data[j].first <= tmp.first)	{
				std::swap(data[i++], data[j]);
			}
		}
		return i - 1;
	}

	void do_sort(vector<pair<int, char> > &data, int l, int h)
	{
		if (l < h)
		{
			int pos = partition2(data, l, h);
			do_sort(data, l, pos - 1);
			do_sort(data, pos + 1, h);
		}
	}
public:
	void sort(vector<pair<int, char> > &data)
	{
		do_sort(data, 0, data.size() - 1);
	}
};

void readData(vector<pair<int, char> > &data)
{
	int num;
	cin >> num;
	data.resize(num);

	char c;
	int v;
	for (int i = 0; i < num; ++i)
	{
		cin >> c >> v;
		data[i] = make_pair(v, c);
	}
}

int main()
{
	vector<pair<int, char> > data;
	readData(data);
	vector<pair<int, char> > data_ms(data), data_qs(data);

	MergeSort ms;
	ms.sort(data_ms);

	QuickSort qs;
	qs.sort(data_qs);

	string s = "Stable";
	for (int i = 0; i < data.size(); ++i)
	{
		if (data_ms[i] != data_qs[i])
		{
			s = "Not stable";
		}
	}
	cout << s << endl;

	for (pair<int, char> &v : data_qs)
		cout << v.second << " " << v.first << endl;
}