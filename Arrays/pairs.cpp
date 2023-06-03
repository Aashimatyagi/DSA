#include<iostream>
#include<map>
#include<string>
#include<list>
using namespace std;

pair<int,int> calculateSum(int arr[],int n,int sum){

    int s=0;
    int e=n-1;
    while(s<e)
    {
        if(arr[s]+arr[e]==sum)
        {
            return make_pair(arr[s],arr[e]);
        }
        else if(arr[s]+arr[e]<sum){
            s++;
        }
        else if(arr[s]+arr[e]>sum){
            e--;
        }
       
    }
     return make_pair(0,0);
}

int main(){

    int arr[]={10,5,2,3,-6,9,11};
    int n=sizeof(arr)/sizeof(int);

    pair<int,int> answer=calculateSum(arr,n,4);
    cout<<"["<<answer.first<<","<<answer.second<<"]\n";
    }
