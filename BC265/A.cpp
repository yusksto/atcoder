#include <iostream>

int main()
{
    int X, Y, N ;
    std::cin >> X >> Y >> N;

    if (X < Y / 3.)
    {
        std::cout << N * X << std::endl;
        return 0;
    }

    std::cout << (N / 3) * Y + (N % 3) * X << std::endl;

    return 0;
}