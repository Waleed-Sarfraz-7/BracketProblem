#include <iostream>
using namespace std;
main(){
    string array;
    cout << "Enter a string: ";
    getline(cin, array);
    int length = array.length();
    bool condition1;
    condition1 = checkEvenNumber(length);
    
}
bool checkEvenNumber(int length)
{
    if (length%2!=0 ? true : false)
}