#include<iostream>
using namespace std;
int binary_search(int arr[], int key, int l, int n) {
    if (l <= n) {
        int mid = l + (n - l) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            return binary_search(arr, key, l, mid - 1);
        } else {
            return binary_search(arr, key, mid + 1, n);
        }
    }

    return -1;
}


int main(){

    int arr[]={1,2,10,11,19,20,21,22,23,24,25,26,27,28,29,30};
    int key;
    cout<<"enter key";
    cin>>key;

    int n=sizeof(arr)/sizeof(int);
    int index=binary_search(arr,key,0,n);
    if(index<0){
        cout<<key<<"not found";
    }
    else{
        cout<<key<<"found at "<<index<<endl;}
}
