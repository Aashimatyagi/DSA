#include<iostream>
using namespace std;

int main(){
    int marks[100]={-1};
    //all other elemets will be 0 and marks[0]=-1
    int n;
    cout<<"Enter number of students\n";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>marks[i];
    }
    int sum=0;

    for(int i=0;i<n;i++){
        cout<<marks[i]<<" ,";
        sum+=marks[i];
    }
    cout<<"avg marks is"<<sum/n<<endl;
    return 0;

}