#include <iostream>
#include <limits>

using namespace std;

int main()
{
    const int SIZE = 5;
    int arr[SIZE];
    int perimeter = 0;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter " << (i + 1) << " the side size ->" << endl;
        cin >> arr[i];

        while (cin.fail() || arr[i] <= 0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. \nEnter a positive number for side " << (i + 1) << " -> " << endl;
            cin >> arr[i];
        }

        perimeter += arr[i];
    }

    cout << "\nThe perimeter of a pentagon is: " << perimeter << endl;

    return 0;
}