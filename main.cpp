#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter numbers: " << endl;
    string inputNumbers;
    cin >> inputNumbers;
    string sizeInStr = "";
    int i = 0;
    do
    {
        sizeInStr += inputNumbers[i];
        i++;
    } while (inputNumbers[i] != ';');
    //cout << sizeInStr << endl;
    int sizeOfInputArray = stoi(sizeInStr);
    //cout << sizeOfInputArray;
    int inputArray[sizeOfInputArray];
    string temp = "";
    int counterOfArray = 0;
    for(int j = i+1; j < inputNumbers.size(); j++)
    {
        if(inputNumbers[j] != ',')
        {
            temp += inputNumbers[j];
        }
        else
        {
            inputArray[counterOfArray] = stoi(temp);
            counterOfArray++;
            temp = "";
        }
    }
    inputArray[counterOfArray] = stoi(temp);
    cout << inputArray[2];

    return 0;
}
