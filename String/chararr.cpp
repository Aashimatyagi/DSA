#include <iostream>
using namespace std;

int ispalindrome(char name[],int n){
    
    int s = 0;
    int e = n - 1;
    while(s<=e){
    if(name[s]!=name[e]){
        return 0;
    }
    else{
        s++;
        e--;
    }
    }
    return 1;
}

void reversearray(char name[], int n)
{

    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}

int getLength(char name[])
{

    int i = 0;
    while (name[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char name[20];

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Your name is: " << name << endl;

    std::cout << "Length of your name is " << getLength(name) << endl;
    reversearray(name, getLength(name));
    std::cout << "Reverse of your name is " << name << endl;
    std::cout << "Is your name palindrome? " << ispalindrome(name, getLength(name)) << endl;
    return 0;
}