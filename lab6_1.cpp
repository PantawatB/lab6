#include<iostream>
using namespace std;

int main(){
    int user,even,odd;
    even = 0;
    odd = 0;
    do{
        cout << "Enter an integer: ";
        cin >> user;
        if(user%2==0 && user != 0){
            even++;
        }
        if(user%2 != 0 && user != 0){
            odd++;
    }
       
    }   while (user!=0);
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = "  << odd << endl;
    return 0;
}