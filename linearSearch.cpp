#include <iostream>
using namespace std;
// Linear Search
// A particular element in the array
int linear_Search(int a[], int n, int key)
{
    //Find out the index of that element by traversing the array
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << key << " found at " << i + 1 << " position";
            break;
        }
    }
    return -1; // Element is not present
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

    linear_Search(a, n, key);

    return 0;
}
