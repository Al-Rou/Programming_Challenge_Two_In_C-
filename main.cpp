#include <iostream>

using namespace std;

int main()
{
    cout << "Enter numbers: " << endl;
    string inputNumbers;
    cin >> inputNumbers;
    string sizeInStr;
    int i = 0;
    do
    {
        sizeInStr[i] = inputNumbers[i];
        i++;
    } while (inputNumbers[i] != ';');
    return 0;
}
