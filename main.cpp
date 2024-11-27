//В одновимірному масиві, що складається з N дійсних чисел обчислити:
//
//Суму від'ємних елементів.
//Добуток елементів, що знаходяться між min і max елементами.
//Добуток елементів з парними номерами.
//Суму елементів, що знаходяться між першим і останнім від'ємними елементами.

#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));

    int const SIZE = 15;
    double arr[SIZE];
    double negative_sum = 0;

    cout << "\nYour list of random action numbers -> \n[ ";

    for (int i = 0; i < SIZE; i++)
    {
        if (rand() % 2 == 0)
        {
            arr[i] = rand() % 175 - 75;
        }
        else
        {
            arr[i] = (rand() % 175 - 75) + static_cast<double>(rand() % 100) / 100.0;
        }

        cout << arr[i] << "  ";
    }

    cout << "]" << endl;


    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < 0)
        {
            negative_sum += arr[i];
        }
    }

    cout << "\nSum of negative numbers: " << negative_sum << endl;








    return 0;
}
