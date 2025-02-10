#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int set1,set2,set3,set4,set5;    
    int calculation;
    calculation = 0;
    cout<<"Welcome to the Guess your day of birth game, Type 1 if there is your day of the in the set given or type 0"<<endl;
    cout<<"Set1 = 1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31"<<endl;
    cin>>set1;
    cout<<"set 2 = 2,3,6,7,10,11,14,15,18,19,22,23,26,27,30,31"<<endl;
    cin>>set2;    
    cout<<"set 3 = 4,5,6,7,12,13,14,15,20,21,22,23,28,29,30,31"<<endl;
    cin>>set3;
    cout<<"set 4 = 8,9,10,11,12,13,14,15,24,25,26,27,28,29,30,31"<<endl;
    cin>>set4;
    cout<<"set 5 = 16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31"<<endl;
    cin>>set5;
    calculation = set1 * 1 +set2 * 2 + set3 * 4 + set4 * 8 +set5 * 16;
    cout<<"Your day of birth is "<<calculation<<endl;
    return 0;
}
