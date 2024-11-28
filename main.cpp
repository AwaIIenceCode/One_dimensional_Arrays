#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const int SIZE = 10;
    int arr[SIZE];

    srand(time(NULL));

    cout << "Your array of random numbers -> [ ";

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 75 - 50;
        cout << arr[i] << ", ";
    }

    cout << "]";

    int max_value = *max_element(arr, arr + SIZE);
    int min_value = *min_element(arr, arr + SIZE);

    cout << "\nMaximum element in this list -> " << max_value << endl;
    cout << "Minimum element in this list -> " << min_value << endl;

    return 0;
}