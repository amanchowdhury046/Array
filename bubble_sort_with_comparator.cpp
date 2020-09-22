
#include<iostream>
using namespace std;

bool compare(int a, int b)
{
    return a < b; // Sorted in increasing order
}

// Bubble Sort
void bubble_sort(int a[], int n, bool (&cmp)(int a, int b))
// This is how we accept the function in another function
{

    //N-1 large elements to the end
    for (int i = 1; i < n; i++)
    {

        //Pairwise Swapping in the unsorted of the array
        for (int j = 0; j <= (n - i - 1); j++)
        {
            if (cmp(a[j], a[j + 1]))
            {
                swap(a[j], a[j + 1]);
            }
        }
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

    bubble_sort(a, n, compare); // Here we pass the function as a parameter 
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ",";
    }

    return 0;
}
