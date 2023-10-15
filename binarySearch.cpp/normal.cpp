#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int begin = 0;
    int end = size - 1;
    int mid = (begin + end) / 2;
    int target = 6;
    int flag = 0;
    while (begin <= end)
    {
        if (arr[mid] == target)
        {
            cout << arr[mid];
            flag = 1;
            break;
        }
        if (arr[mid] < target)
        {
            begin = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (begin + end) / 2;
    }
    if (flag == 0)
    {
        cout << "not found";
    }
}
