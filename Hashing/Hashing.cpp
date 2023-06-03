#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<string,int> menu;

    menu["maggie"]=23;
    menu["tea"]=16;
    menu["dosa"]=50;

    string item;
    cin>>item;

    //updation
    menu["maggie"]=2*menu["maggie"];

    //deletion
    menu.erase("dosa");

    //searching O[1]
    if(menu.count(item)==0){
        cout<<item<<"is not available \n";
    } 
    else{
        cout<<item<<"is available and price is Rs."<<menu[item]<<endl;
    }

    //iteration
    for(pair<string,int> item:menu){
        cout<<item.first<<" - Rs."<<item.second<<endl;
    }
}