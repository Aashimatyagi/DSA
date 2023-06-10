#include<iostream>
#include<vector>
using namespace std; 

// } Driver Code Ends


class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long i=0,j=0;
        long sum=0;
        long max = LONG_MIN;

        while(j<N){
            sum=sum+Arr[j];
            if((j-i+1)<K){
                j++;
            }
            else if((j-i+1)==K)
            {
                max=std::max(sum,max);
                sum=sum-Arr[i];
                i++;
                j++;
            }
           
        }
    
        return max;
    }
    
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 