#include<iostream>
using namespace std;


int binary_search(int arr[],int key, int n){

    int start=0;
    int end=n-1;
    int mid;
    while(start<=end){
        mid=(start+end)/2;
    
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        end=mid-1;
    }
    else {
        start=mid+1;
    }}
 
    return -1;
    }

int main(){

    int arr[]={1,2,10,11,19,20,21,22,23,24,25,26,27,28,29,30};
    int key;
    cout<<"enter key";
    cin>>key;

    int n=sizeof(arr)/sizeof(int);
    int index=binary_search(arr,key,n);
    if(index<0){
        cout<<key<<"not found";
    }
    else{
        cout<<key<<"found at "<<index<<endl;}
}

//worst case O(logn)
//best case o(1)
//average case O(logn)