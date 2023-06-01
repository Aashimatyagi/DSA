#include <iostream>
using namespace std;


int linear_search(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){

    int arr[]={1,2,0,10,11,9,8,8,7};
    int key;
    cout<<"enter key";
    cin>>key;
    int n=sizeof(arr)/sizeof(int);
    int index=linear_search(arr,n,key);
    if(index<0){
        cout<<key<<"not found";
    }
    else{
        cout<<key<<"found at"<<index<<endl;}
    return 0;
}

//worst case O(n)
//best case o(1)
//average case O(n)