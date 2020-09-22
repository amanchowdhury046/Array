#include<iostream>
using namespace std;

//Binary Search
//Efficient Way to Search in Sorted Arrays

int binary_search(int a[], int n, int key)
{

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1; // If element is not present
}

int main()
{

    int n, key;
    cin >> n;

    int a[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //Ask for the element we want to search
    cout << "Enter the element you want to search  : ";
    cin >> key;

    cout << binary_search(a, n, key) << endl;

    return 0;
}
