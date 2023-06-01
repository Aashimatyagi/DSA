#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){

    for (int i = 0; i < n/2; i++)
    {
        swap(arr[i],arr[n-i-1]);
}}      

int main(){

    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(int);
    reverseArray(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }


}
// best case O(1)
// worst case O(n)
// average case O(n)