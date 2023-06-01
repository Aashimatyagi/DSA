#include<iostream>
using namespace std;

void SumSubarrays(int arr[],int n){
    int prefixsum[n]={0};
    prefixsum[0]=arr[0];
    for(int i=1;i<n;i++){
        prefixsum[i]=prefixsum[i-1]+arr[i];
    }
    int largestsum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            sum=i>0 ? prefixsum[j]-prefixsum[i-1] : prefixsum[j];
            cout<<"  sum= "<<sum<<endl;
            largestsum=max(largestsum,sum);
            sum=0;
        }
        
    }
    cout<<"largest sum is "<<largestsum<<endl;
}


int main ()
{
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    SumSubarrays(arr,n);
}