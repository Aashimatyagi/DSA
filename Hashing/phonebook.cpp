#include<iostream>
#include<map>
#include<string>
#include<list>
using namespace std;

int main(){


    map<string, list<string>> phonebook;

    phonebook["aashima"].push_back("9876543210");
    phonebook["aashima"].push_back("9876543211");
    phonebook["aashima"].push_back("9876543212");
    phonebook["aashima"].push_back("9876543213");

    phonebook["aashi"].push_back("7878787879");
    phonebook["aashi"].push_back("7878787878");

    phonebook["rashi"].push_back("7874567890");

    phonebook["tashi"].push_back("9875687878");


    for(const auto& contact : phonebook){
        for(const auto& number:contact.second){
            cout<<contact.first<<" - "<<number<<endl;
        }
    }

}




