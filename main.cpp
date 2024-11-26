#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

int main()
{
    int const SIZE = 12;
    int arr[SIZE];
    int max_value, min_value;
    int max_index = 0, min_index = 0;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter the profit for the month " << (i + 1) << " -> " <<  endl;
        cin >> arr[i];

        while (cin.fail() || arr[i] <= 0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. \nEnter positive profit for the month -> " << endl;
            cin >> arr[i];
        }
    }

    max_value = *max_element(arr, arr + SIZE);
    min_value = *min_element(arr, arr + SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == max_value)
        {
            max_index = i;
        }

        if (arr[i] == min_value)
        {
            min_index = i;
        }
    }

    cout << "\nMaximum monthly profit -> " << max_value << " in month -> " << (max_index + 1) << endl;
    cout << "Minimum monthly profit -> " << min_value << " in month -> " << (min_index + 1)<< endl;

    return 0;
}