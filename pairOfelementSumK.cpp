#include<iostream>
using namespace std;

//Given a Sorted Array, Find Pair of Elements that sum to K (Given)

// Logic: 1- Brute force solution - O(N^2)
void pair_of_elements(int a[], int n, int sum)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == sum)
            {
                cout << a[i] << " and " << a[j] << endl;
            }
        }
    }
}
// Logic: 2- Two Pointer Approach - O(N)
void pair_of_elements2(int a[], int n, int sum)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int current_sum = a[i] + a[j];
        if (current_sum > sum)
        {
            j--;
        }
        else if (current_sum < sum)
        {
            i++;
        }
        else if (current_sum == sum)
        {
            cout << a[i] << " and " << a[j] << endl;
            i++;
            j--;
        }
    }
}
// Logic:3 Traverse the array and apply binary search to find the elements - O(NlogN)

int main()
{

    int a[] = {1, 3, 5, 7, 10, 11, 12, 13};
    int n = sizeof(a) / sizeof(int);
    int sum = 16;
    pair_of_elements(a, n, sum);
    pair_of_elements2(a, n, sum);

    return 0;
}
