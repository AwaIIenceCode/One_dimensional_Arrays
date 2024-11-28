#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(NULL));

    const int SIZE = 15;
    double arr[SIZE];
    double negative_sum = 0;

//array filling________________________________________________________________________________________________________

    cout << "\nYour list of random action numbers in range (-15 -- 15) -> \n[ ";

    for (int i = 0; i < SIZE; i++)
    {
        if (rand() % 2 == 0)
        {
            arr[i] = rand() % 30 - 15;
        }
        else
        {
            arr[i] = (rand() % 30 - 15) + static_cast<double>(rand() % 100) / 100.0;
        }

        cout << arr[i] << "  ";
    }

    cout << "]" << endl;

//first block___________________________________________________________________________________________________________

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < 0)
        {
            negative_sum += arr[i];
        }
    }

//second block___________________________________________________________________________________________________________

    double max_value = arr[0];
    double min_value = arr[0];
    int max_index = 0;
    int min_index = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (max_value < arr[i])
        {
            max_value = arr[i];
            max_index = i;
        }

        if (min_value > arr[i])
        {
            min_value = arr[i];
            min_index = i;
        }
    }

    if (min_index > max_index)
    {
        swap(min_index, max_index);
    }

    if (max_index - min_index <= 1)
    {
        cout << "\nNo elements between min and max indices, so the product between min and max = 1" << endl;
    }

    long double production_between = 1;

    for (int i = min_index + 1; i < max_index; i++)
    {
        production_between *= arr[i];
    }

//third block___________________________________________________________________________________________________________

    long double even_elements = 1.0;

    for (int i = 0; i < SIZE; i++)
    {
        if (i % 2 == 0)
        {
            even_elements *= arr[i];
        }
    }

//fourth block__________________________________________________________________________________________________________

    int first_negative_element = -1;
    int last_negative_element = -1;

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < 0)
        {
            if (first_negative_element == -1)
            {
                first_negative_element = i;
            }
            last_negative_element = i;
        }
    }

    if (first_negative_element > last_negative_element)
    {
        swap(first_negative_element, last_negative_element);
    }

    double sum_between_first_and_last_negative = 0;

    for (int i = first_negative_element + 1; i < last_negative_element; i++)
    {
        sum_between_first_and_last_negative += arr[i];
    }

    cout << "\n1 - Sum of negative numbers -> " << negative_sum << endl;
    cout << "2 - The product of elements that are between min and max elements -> " << fixed << setprecision(2) << production_between << endl;
    cout << "3 - Product of elements with even numbers -> " << even_elements << endl;
    cout << "4 - The sum of the elements between the first and last negative elements -> " << sum_between_first_and_last_negative << endl;

    return 0;
}
