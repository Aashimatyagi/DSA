#include<iostream>
#include<unordered_set>
using namespace std;

pair<int,int> calculateSum(int arr[],int n,int sum){

    unordered_set<int> number;
    for(int i=0;i<n;i++){
        if(number.count(sum-arr[i])){
            return make_pair(arr[i],sum-arr[i]);
        }
        else if(number.count(sum-arr[i])==0){
            number.insert(arr[i]);
        }
        
    }
      return make_pair(0,0);
  
}

int main(){

    int arr[]={1,2,3,2};
    int n=sizeof(arr)/sizeof(int);

    pair<int,int> answer=calculateSum(arr,n,4);
    cout<<"["<<answer.first<<","<<answer.second<<"]\n";
    }
