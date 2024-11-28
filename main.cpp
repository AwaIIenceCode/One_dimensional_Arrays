#include <iostream>
#include <limits>

using namespace std;

int main()
{
    const int SIZE = 12;
    double arr[SIZE];
    int start_diapazone, finish_diapazone;

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

    do
    {
        cout << "Enter the start month (1-12) -> ";
        cin >> start_diapazone;

        cout << "Enter the end month (1-12) -> ";
        cin >> finish_diapazone;

        if (start_diapazone < 1 || start_diapazone > SIZE || finish_diapazone < 1 || finish_diapazone > SIZE || start_diapazone > finish_diapazone)
        {
            cout << "Invalid range! Please re-enter.\n";
        }
    } while (start_diapazone < 1 || start_diapazone > SIZE || finish_diapazone < 1 || finish_diapazone > SIZE || start_diapazone > finish_diapazone);

    double max_value = arr[start_diapazone - 1];
    double min_value = arr[start_diapazone - 1];
    int max_month = start_diapazone;
    int min_month = start_diapazone;

    for (int i = start_diapazone; i <= finish_diapazone; i++)
    {
        if (arr[i - 1] > max_value)
        {
            max_value = arr[i - 1];
            max_month = i;
        }

        if (arr[i - 1] < min_value)
        {
            min_value = arr[i - 1];
            min_month = i;
        }
    }

        cout << "\nMaximum profit: " << max_value << " in month " << max_month << endl;
        cout << "Minimum profit: " << min_value << " in month " << min_month << endl;

        return 0;
}
