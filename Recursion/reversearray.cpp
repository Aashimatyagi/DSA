#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    if(n==-1){return ;}
    cout<<arr[n]<<" ,";
    return reverse(arr,n-1);
}

int main(){
    int arr[]={3,6,7,89,1,2,3,6,0,2,4,5};
    int n=sizeof(arr)/sizeof(n);
    reverse(arr,n-1);

}