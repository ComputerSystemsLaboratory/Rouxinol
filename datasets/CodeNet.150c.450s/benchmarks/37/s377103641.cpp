#include <iostream>
#include <iomanip>

int main(void)
{
	float a = 0;
	float b = 0;
	float c = 0;
	float d = 0;
	float e = 0;
	float f = 0;

	float x = 0;
	float y = 0;

	while (std::cin >> a >> b >> c >> d >> e >> f)
	{
		float tmp_a = a * e;
		float tmp_c = c * e;
		float tmp_d = d * b;
		float tmp_f = f * b;

		if (tmp_c == tmp_f)
		{
			x = 0;
		}
		else
		{
			x = (tmp_c - tmp_f) / (tmp_a - tmp_d);
		}

		float tmp_b = b * d;
		tmp_c = c * d;
		float tmp_e = e * a;
		tmp_f = f * a;

		if (tmp_c == tmp_f)
		{
			x = 0;
		}
		else
		{
			y = (tmp_c - tmp_f) / (tmp_b - tmp_e);
		}

		std::cout << std::fixed << std::setprecision(3) << x << " " << y << std::endl;
	}

	return 0;
}