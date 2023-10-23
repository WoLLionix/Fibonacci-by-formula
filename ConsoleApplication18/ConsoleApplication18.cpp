#include <iostream>
#include <array>

int main()
{
    std::array<int, 14> fibonacci = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377 };
    std::array<double, 13> masyv;

    for (int i = 0; i < fibonacci.size() - 1; i++)
    {
        masyv[i] = double(fibonacci[i + 1]) / double(fibonacci[i]);
    }

    std::cout << "New array: " << std::endl;
    for (int i = 0; i < masyv.size(); i++)
        std::cout << masyv[i] << ' ';
}
