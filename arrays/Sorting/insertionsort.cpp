#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size = ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Unsorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}