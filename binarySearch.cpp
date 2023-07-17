#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int binarySearch(int arr[], int start, int end, int key)
{
    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return 1;
        }

        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return 0;
}
int main()
{

    int arr[] = {4, 6, 9, 10, 12, 14, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key;

    cout << "Enter the key element that you wish to search: ";
    cin >> key;

    int res = binarySearch(arr, 0, size - 1, key);
    if (res == 1)
    {
        cout << " The key element is found";
    }
    else
    {
        cout << " The element is not found";
    }
    // print(arr, size);

    return 0;
}