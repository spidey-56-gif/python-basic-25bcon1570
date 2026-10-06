#include<iostream>
using namespace std;
int main()
{
    char a;
    cout << "check alphabet or not : ";
    cin >>a;
    if(int(a)>64 && int(a)<91){
        cout<<"It Is A Capital Alphabet";
    }
    if(int(a)>47 && int(a)<58){
        cout<<"Not an Alphabet,its a num.";
    }
    if(int(a)>96 && int(a)<113){
        cout<<"Its a Small Letter Alphabet";
    }
}
