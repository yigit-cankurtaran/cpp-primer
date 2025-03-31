#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    cout << "Hello, World" << endl;
    cout << "input some numbers" << endl;
    int i = 0, j = 0;
    cin >> i >> j;
    // separate fragments
    cout << "result is " << endl;
    cout << i * j << endl;
    return 0;
}
