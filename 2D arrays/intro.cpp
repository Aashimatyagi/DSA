#include<iostream>
using namespace std;


int isPresent(int arr[][4], int x,int r,int c)
{
   for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==x){
                return 1;
            }
        }
   }
        return 0;

}

void printSum(int arr[][4], int r,int c){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        cout<<"sum for row "<<i<<" is "<<sum<<endl;
    }
}
int main (){


    int arr[3][4];

    std::cout<<"enter the elements of the array"<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
        std::cin>>arr[i][j];
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
        std::cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    } 

    cout<<"enter an element to find";

    int x;
    cin>>x;

    if(isPresent(arr,x,4,4)){
        cout<<"element is present";
    }
    else{
        cout<<"element is not present";
    }

    cout<<"Row-wise sum"<<endl;
    printSum(arr,3,4);
    return 0;
}