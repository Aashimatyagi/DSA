#include<iostream>
using namespace std;

void insertion(int arr[], int n){


    for (int i=1;i<n;i++){
            for(int j=i;j>0;j--){
                if(arr[j]<arr[j-1]){
                    swap(arr[j],arr[j-1]);
                }
            }

    }
}
int main(){

    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    insertion(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}