#include <iostream>
using namespace std;

int kadanesalgo(int arr[], int n)
{
    int sum = 0;
    int max =arr[0]; // if array has single negative element
    for (int i = 0; i < n; i++)
    {

        sum += arr[i];
        max = max > sum ? max : sum;
        if (sum < 0)
        {
            sum = 0;
        }//sum is checked later
    }
    return max;
} x

int main()
{

    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int n = sizeof(arr) / sizeof(int);
    int sum = kadanesalgo(arr, n);
    cout << "largest sum is " << sum << endl;
}
