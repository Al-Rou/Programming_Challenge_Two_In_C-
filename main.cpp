#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Prompting the user
    cout << "Enter numbers: " << endl;
    string inputNumbers;
    //Taking user's entries
    cin >> inputNumbers;
    //Finding the size of array
    string sizeInStr = "";
    int i = 0;
    do
    {
        sizeInStr += inputNumbers[i];
        i++;
    } while (inputNumbers[i] != ';');
    int sizeOfInputArray = stoi(sizeInStr);
    //Defining the array for integer entries
    int inputArray[sizeOfInputArray];
    //Filling the array out with the user's entries
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
    //Sorting the array
    for(int j = 0; j < sizeOfInputArray-1; j++)
    {
        for(int k = j+1; k < sizeOfInputArray; k++)
        {
            if(inputArray[j] > inputArray[k])
            {
                int auxiliary = inputArray[j];
                inputArray[j] = inputArray[k];
                inputArray[k] = auxiliary;
            }
        }
    }
    //Finding neighbors which are equal
    for(int j = 0; j < sizeOfInputArray-1; j++)
    {
        if(inputArray[j] == inputArray[j+1])
        {
            cout << inputArray[j];
            return 0;
        }
    }
    return 0;
}
