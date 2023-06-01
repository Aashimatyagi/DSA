#include<iostream>
using namespace std;


void Bubblesort(int arr[], int n){
    
    for (int i=0;i<n;i++){
        int counter=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                counter++;
            }

        }
        if (counter==0){
            cout<<"no swap is done";
            break;
        }
    }
}

int main(){

    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    Bubblesort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}