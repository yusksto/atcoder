#include <iostream>
#include <vector>
#include <complex>
#include <cmath>

int main() {
    double x[4];
    double y[4];
    for (int i = 0; i < 4; i++)
    {
        std::cin >> x[i];
        std::cin >> y[i];
    }
    std::complex<double> c[4];
    for (int i = 0; i < 4; i++)
    {
        c[i].real(x[i]);
        c[i].imag(y[i]);
    }

    double theta[4];
    for (int i = 0; i < 4; i++)
    {
        theta[i] = (arg(c[i % 4] - c[(i + 1) % 4]) - arg(c[(i + 2) % 4] - c[(i + 1) % 4])) * 180. / 3.14159265358979323846264338;
        if (theta[i] < 0)
        {
            theta[i] += 360;
        }

        if (theta[i] >= 180)
        {
            std::cout << "No" << std::endl;
            return 0;
        }

    }
    std::cout << "Yes" << std::endl;


    return 0;
}
//AC