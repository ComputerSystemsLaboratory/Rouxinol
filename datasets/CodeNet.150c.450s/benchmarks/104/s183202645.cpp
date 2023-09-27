#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
#include <vector>

class DrawLots
{
private:
	int w;					// 縦線の数
	int n;					// 横線の数
	int a, b;				// 入れ替える数値(実際は-1することによってインデックスになる)
	std::vector<int> W;		// int型の動的配列Wを作成
public:
	DrawLots();
	~DrawLots();
	void Print();
	void ExchengeElement();
};

int main()
{
	DrawLots DL = DrawLots();
	DL.ExchengeElement();
	DL.Print();
}

DrawLots::DrawLots()
{
	std::cin >> w;
	std::cin >> n;
	
	W = std::vector<int>(w);

	W.assign(w, 1);

	for (int i = 0; i < w; i++)
	{
		W[i] = i + 1;
	}
}

DrawLots::~DrawLots()
{
}

void DrawLots::ExchengeElement()
{
	int tmp;
	for (int i = 0; i < n; i++)
	{
		
		scanf("%d,%d", &a, &b);

		tmp = W[a-1];
		W[a-1] = W[b-1];
		W[b-1] = tmp;

	}
}

void DrawLots::Print()
{
	for (unsigned int i = 0; i < W.size(); i++)
	{
		std::cout << W[i] << std::endl;
	}
}
