#include <iostream>

using namespace std;

int main()
{
    int mark1, mark2, mark3, mark4;

    int arr1[7];
    int arr2[10] = {1, 2, 3};
    int arr3[] = {1, 2, 3, 4};

    cout << arr2[2] << endl;
    cout << sizeof(arr1) << endl;
    cout << sizeof(arr1[0]) << endl;
    cout << sizeof(arr1) / sizeof(arr1[0]) << endl;

    for (int idx = 0; idx = 7; idx++)
    {
        cout << arr1[idx];
    }

    return 0;
}