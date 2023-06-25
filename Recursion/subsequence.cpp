#include<iostream>
using namespace std;
#include<vector>

void printSubseq(int index, vector<int> ans, vector<int> arr){
    int n=arr.size();
    if(index==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<",";
        }
        cout<<endl;
        return ;
    }

    ans.push_back(arr[index]);
    printSubseq(index+1,ans,arr);
    ans.pop_back();
    printSubseq(index+1,ans,arr);


}

int main(){
    vector<int> arr={3,1,2};
    vector<int> ans;
    printSubseq(0,ans,arr);
}