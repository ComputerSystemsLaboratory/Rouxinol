#include <iostream>
#include <vector>
#include <sstream>
 
class Area
{
public:
	Area()
	: m_area(0)
	, m_left(0)
	{}
	
	~Area()
	{}
	
	Area(const Area& obj) {
		m_area = obj.m_area;
		m_left = obj.m_left;
	}
	
	void setArea(int area, int left) {
		m_area = area;
		m_left = left;
	}
	
	void addArea(int area) {
		m_area += area;
	}
	
	int getArea() {
		return m_area;
	}
	
	int getLeft() {
		return m_left;
	}
private:
	int m_area;
	int m_left;
};
 
class AreaList
{
public:
	AreaList()
	: m_list()
	{}
	
	~AreaList()
	{
		while (!m_list.empty()) {
			Area* p = m_list.back();
			m_list.pop_back();
			delete(p);
		}
	}
	
	void pushArea(Area& counter) {
		Area* q = new Area(counter);
		while (!m_list.empty()) {
			Area* p = m_list.back();
			if (p->getLeft() < q->getLeft()) {
				break;
			}
			m_list.pop_back();
			delete(p);
		}
		m_list.push_back(q);
	}
	
	std::string toString() {
		std::ostringstream os1, os2;
		int total = 0;
		os2 << m_list.size();
		std::vector<Area*>::iterator itr;
		for (itr = m_list.begin(); itr != m_list.end(); itr++) {
			total += (*itr)->getArea() / 2;
			os2 << " " << ((*itr)->getArea() / 2);
		}
		os1 << total;
		std::string output = os1.str() + "\n" + os2.str();
		return output;
	}

private:
	std::vector<Area*> m_list;
};
 
int main() {
	std::string str;
	std::cin >> str;
	
	int w = str.size();
	int h[w + 1];
	int max, min;
	h[0] = max = min = 0;
	for (int i = 0; i < w; i++) {
		switch (str[i]) {
		case '_' :
			h[i + 1] = h[i];
			break;
		case '/' :
			h[i + 1] = h[i] + 1;
			if (h[i + 1] > max) {
				max = h[i + 1];
			}
			break;
		// case '\\' :
		default :
			h[i + 1] = h[i] - 1;
			if (h[i + 1] < min) {
				min = h[i + 1];
			}
			break;
		}
	}
	
	AreaList list;
	Area counter[max - min + 1];
	for (int j = 0; j < max - min + 1; j++) {
		counter[j].setArea(0, 0);
	}
	for (int i = 1; i < w + 1; i++) {
		for (int j = 0; j < max - min + 1; j++) {
			if (j > h[i] - min) {
				if (j == h[i - 1] - min) {
					counter[j].setArea(1, i - 1);
				} else if (counter[j].getArea() > 0) {
					counter[j].addArea((j - (h[i - 1] - min)) + (j - (h[i] - min)));
				}
			} else if (j == h[i] - min) {
				if (j > h[i - 1] - min && counter[j].getArea() > 0) {
					counter[j].addArea(1);
					list.pushArea(counter[j]);
				} else {
					counter[j].setArea(0, 0);
				}
			} else {
				counter[j].setArea(0, 0);
			}
		}
	}
	
	std::cout << list.toString() << std::endl;
	
	return 0;
}
