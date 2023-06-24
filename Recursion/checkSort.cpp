#include<iostream>
using namespace std;

bool isSorted(int arr[],int index, int n){
    
    if(index==n-1){
        return true;
    }

    return arr[index]<arr[index+1]&&isSorted(arr,index+1,n);
}

int main(){
    int arr[]={2,5,7,10,1,15};
    int n=sizeof(arr)/sizeof(int);
    cout<<isSorted(arr,0,n);
}