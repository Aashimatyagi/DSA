
// A Program to prints common element in all
// rows of matrix
#include <iostream>
#include<unordered_map>
using namespace std;
  
// Specify number of rows and columns
#define M 4
#define N 5
  
// prints common element in all rows of matrix
void printCommonElements(int mat[M][N]){
    unordered_map <int,int> count;

   for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            count[mat[i][j]]++;              
        }
   }

   for(auto i:count){
    if(i.second==M){
        cout<<i.first<<",";
    }
   }
}




int main()
{
    int mat[M][N] =
    {
        {1, 2, 1, 4, 8},
        {3, 7, 8, 5, 1},
        {8, 7, 7, 3, 1},
        {8, 1, 2, 7, 9},
    };
  
    printCommonElements(mat);
  
    return 0;
}