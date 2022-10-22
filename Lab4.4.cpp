#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()

{
	double xp, xk, dx, x, R1, R2, y;

	cout << "xp = "; cin >> xp; cout << endl;
	cout << "xk = "; cin >> xk; cout << endl;
	cout << "dx = "; cin >> dx; cout << endl;
	cout << "R1 = "; cin >> R1; cout << endl;
	cout << "R2 = "; cin >> R2; cout << endl;

	cout << fixed;
	cout << "------------------------------" << endl;
	cout << "| " << setw(7) << "x" << setw(7) << " |"
		<< setw(7) << "y" << setw(7) << " |" << endl;
	cout << "------------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x <= -2 * R1)
			y = R1 - R1 * (x + 1 + 2 * R1);
		else
			if (-2 * R1 < x && x <= 0)
				y = sqrt(R1 * R1 - (x + R1) * (x + R1));
			else
				if (0 < x && x <= 2 * R2)
					y = -sqrt(R2 * R2 - (x - R2) * (x - R2));
				else
					if (2 * R2 < x && x <= 6)
						y = -1.0 / (6 - 2 * R2) * (x - 2 * R2);
					else
						y = -1;

		cout << "| " << setprecision(2) << setw(7) << x << setw(7)
			<< " |" << setprecision(2) << setw(7) << y << setw(7) << " |" << endl;
		x += dx;

	}
	cout << "------------------------------" << endl;

	system("pause");
	return 0;
