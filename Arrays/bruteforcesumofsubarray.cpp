#include<iostream>
using namespace std;

void printSubarrays(int arr[],int n){
    int largestsum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<",";
                sum+=arr[k];
            }
            cout<<"  sum= "<<sum<<endl;
            largestsum=max(largestsum,sum);
            sum=0;
        }
        
    }
    cout<<"largest sum is "<<largestsum<<endl;
}


int main ()
{
    int arr[]={1,2,13,-4,5,-16,7,8};
    int n=sizeof(arr)/sizeof(int);
    printSubarrays(arr,n);
}