#include<iostream>
using namespace std;

int linearSearch(int arr[], int index, int n, int target) {
    if (index == n) {
        return -1;
    }
    if (arr[index] == target) {
        return index;
    }
    return linearSearch(arr, index + 1, n, target);
}

int linearSearchLast(int arr[], int index, int n, int target) {
    if (index == -1) {
        return -1;
    }
    if (arr[index] == target) {
        return index;
    }
    return linearSearchLast(arr, index - 1, n, target);
}

int main() {
    int arr[] = {2, 5, 7, 10, 1, 12};
    int n = sizeof(arr) / sizeof(int);
    std::cout << linearSearch(arr, 0, n, 2) << endl;
    std::cout << linearSearchLast(arr, n - 1, n, 2) << endl;
    return 0;
}
