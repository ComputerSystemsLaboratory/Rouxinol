#include <iostream>
#include <string>
#include <cmath>


class Point
{
public:
	double m_X;
	double m_Y;
	Point(double x, double y)
		: m_X( x )
		, m_Y( y )
	{}
};

class LineSegment
{
private:
	Point m_Start;
	Point m_End;
public:
	LineSegment(Point start, Point end)
		: m_Start( start )
		, m_End( end )
	{}
	double CalcSlope()
	{
		if ( m_End.m_Y == m_Start.m_Y)
		{
			return 0.0;
		}

		if (m_End.m_X == m_Start.m_X)
		{
			return 9999999999.0;
		}
	
		return((m_End.m_Y - m_Start.m_Y) / (m_End.m_X - m_Start.m_X));
	}
};

const double EPS = 1e-10;


int main()
{
	int n = 0;
	double x1 = 0;
	double y1 = 0;
	double x2 = 0;
	double y2 = 0;
	double x3 = 0;
	double y3 = 0;
	double x4 = 0;
	double y4 = 0;

	std::cin >> n;

	for (int data_no = 0; data_no < n; ++data_no)
	{
		std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

		Point start1{ x1, y1 };
		Point end1{ x2, y2 };
		Point start2{ x3, y3 };
		Point end2{ x4, y4 };

		LineSegment line1{ start1, end1 };
		double line1_slope = line1.CalcSlope();

		LineSegment line2{ start2, end2 };
		double line2_slope = line2.CalcSlope();

		if ( std::fabs(line1_slope - line2_slope) < EPS )
		{
			std::cout << "YES" << std::endl;
		}
		else
		{
			std::cout << "NO" << std::endl;
		}
	}

	return 0;
}