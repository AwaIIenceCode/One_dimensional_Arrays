#include <iostream>

using namespace std;

int main()
{
    int const SIZE = 10;
    int arr[SIZE]{18,61,32,5,-4,8,69,23,37,14};

    for (int i = SIZE; i--;)
    {
        cout << arr[i] << " ";
    }

    return 0;
}