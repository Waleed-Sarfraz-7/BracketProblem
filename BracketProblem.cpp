#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
main(){
    bool checkCondition2(int length);
    bool checkCondition1(string array, int length);
    string array;
    cout << "Enter a string: ";
    getline(cin, array);
    int length = array.length();
    bool condition1;
    bool condition2;
    cout << length;
    getch();
    condition1 = checkCondition1(array, length);
    condition2 = checkCondition2(length);

}
bool checkCondition2(int length)
{
    if (length%2!=0)
    {
        return false;
    }
    else 
    {
        return true;
    }
}
bool checkCondition1(string array, int length)
{
    for (int i =0;i<length;i++)
    {
        if (array[i] == '(' || array[i] == ')' || array[i] == '{' || array[i] == '}' || array[i] == '[' || array[i] == ']')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}