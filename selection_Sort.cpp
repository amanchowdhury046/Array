#include <iostream>
using namespace std;

// Selection Sort
void selection_sort(int a[], int n)
{
    // We go till n-1 coz last element is always sorted
    for (int i = 0; i < n - 1; i++)
    {
        // We stand at this position
        int min_index = i;
        //find out the smallest element idx in the unsorted part
        for (int j = i; j <= n - 1; j++)
        {
            if (a[j] < a[min_index])
            {
                // We only have to update the min_index bcoz swap is expensive operation we do it at last
                min_index = j;
            }
        }
        //After this loop we can do swap finally
        swap(a[i], a[min_index]);
    }
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
    selection_sort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ",";
    }

    return 0;
}
