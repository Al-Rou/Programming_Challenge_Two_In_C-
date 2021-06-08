#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    cout << "Enter numbers: " << endl;
    string inputNumbers;
    cin >> inputNumbers;
    string sizeInStr = "";
    //sizeInStr = inputNumbers;
    int i = 0;
    do
    {
        sizeInStr += inputNumbers[i];
        i++;
    } while (inputNumbers[i] != ';');
    cout << sizeInStr;
    //int sizeOfInputArray = atoi(sizeInStr);
    //cout << sizeOfInputArray;
    return 0;
}
