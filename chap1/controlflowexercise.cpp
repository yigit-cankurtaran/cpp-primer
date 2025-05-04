#include <iostream>

int main()
{
    // 1.9
    int i = 50;
    int sum = 0;
    while (i <= 100)
    {
        sum += i;
        i += 1;
        std::cout << "i is currently " << i << std::endl;
        std::cout << "sum is currently " << sum << std::endl;
    }

    // 1.10
    int j = 10;
    while (j > 0)
    {
        j--;
        std::cout << "j is currently " << j << std::endl;
    }

    // 1.11 will be solved later
}
