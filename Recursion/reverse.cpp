#include <iostream>
using namespace std;
void sum(int n)
{   
    if(n==0){
        return ;
    }
    cout<<n%10;
    sum(n/10);
    

}

int main()
{

    int x;
    cin >> x;
    sum(x);
}
