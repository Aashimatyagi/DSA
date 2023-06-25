#include<iostream>
using namespace std;
#include<vector>

void printSubseq(int index, vector<int> ans, vector<int> arr, int sum,int target){
    int n=arr.size();
    if(index==n&& sum==target){
       
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<",";
        }
        cout<<endl;
        
        return ;
        
    }
      if (index == n) {
        return;
    }

    ans.push_back(arr[index]);
    sum+=arr[index];
    printSubseq(index+1,ans,arr,sum,target);
    ans.pop_back();
    sum-=arr[index];
    printSubseq(index+1,ans,arr,sum,target);


}

int main(){
    vector<int> arr={3,1,2};
    vector<int> ans;
    int sum=0;
    printSubseq(0,ans,arr,sum,3);
}