#include <iostream>
using namespace std;

int main()
{
    // int numbers[5] = {1, 3, 5, 7, 9};

    // cout << numbers << endl;
    // cout << &numbers[0] << endl;
    // cout << numbers[2] << endl;
    // cout << *(numbers + 2) << endl;

    int numbers2[5];

    for (int i = 0; i <= 4; i++)
    {
        cout << "Number: ";
        cin >> numbers2[i];
    }

    for (int i = 0; i <= 4; i++)
    {
        cout << *(numbers2 + i) << " ";
    }

    return 0;
}