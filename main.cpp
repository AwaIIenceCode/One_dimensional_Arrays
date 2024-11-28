// var #1
#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 10;
    int arr[SIZE]{18,61,32,5,-4,8,69,23,37,14};

    for (int i = SIZE; i--;)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
// var #2
#include <iostream>

using namespace std;

int main()
{
    int const SIZE = 10;
    int arr[SIZE]{61,43,-12,54,-4,0,43,2,15,-4};
    int reversed[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        reversed[i] = arr[SIZE - 1 - i];
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << reversed[i] << " ";
    }

    return 0;
}

