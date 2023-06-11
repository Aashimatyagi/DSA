

#include <bits/stdc++.h>
using namespace std;



class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {

        unordered_map <int,int>sum;
        int pair=0;
         for(int i=0;i<n;i++){
            if(sum[k-arr[i]]>0){
                pair+=sum[k-arr[i]];
            }
            sum[arr[i]]++;
        }
        return pair;

    }
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
