#include <iostream>
using namespace std;

int divede(int array[], int start, int end);
void Quick(int array[], int start, int end);
int main()
{
    int num, i;
    int arr[10];

    cout << "Enter the number of elements : ";
    cin >> num;

    cout << "Enter the elements : ";
    for (i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    Quick(arr, 0, {num - 1});

    cout << "After sorting the elements are : " << endl;
    for (i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

int divede(int arr[], int start, int end)
{
    int pivot = arr[end];
    int index = start;

    for (int i = start; i < end; i++)
    {
        if (arr[i] < pivot)
        {
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
            index++;
        }
    }

    int temp = arr[end];
    arr[end] = arr[index];
    arr[index] = temp;

    return index;
}

void Quick(int array[], int start, int end)
{
    if (start < end)
    {
        int d = divede(array, start, end);
        Quick(array, start, d - 1);
        Quick(array, (d + 1), end);
    }
}