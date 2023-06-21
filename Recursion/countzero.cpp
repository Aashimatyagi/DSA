#include <iostream>
using namespace std;
int helper(int n)
{   
    int cnt=0;
    if(n%10==0){
        cnt++;
    }
    if(n==0){
        return cnt;
    }
    return helper(n/10,cnt);
    

}

int main()
{

    int x;
    cin >> x;
    cout<<count(x);
}
