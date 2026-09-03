#include <iostream>

using namespace std;

int main()
{
    int size = 10;
    double DA[size];
    cout << "Please enter 10 values:\n";
    for(int i = 0; i < size; i++)
    {
        cin >> DA[i];
    }

    // to find the largest odd value:

    double largest;
    int found = 0;
    for(int i =0; i < 10 ; i++)
    {
        if( (int) DA[i] % 2 != 0)
        {
            if(found == 0 || DA[i] > largest)
            {
                largest = DA[i];
                found = 1;
            }
        }
    }
    if(found == 1)
    {
        cout << "The Largest Odd value = " << largest << endl;
    }
    else if(found == 0)
    {
        cout << "No Odd values!" << endl;
    }

    //to find values with 2-digits:

    cout << "The values with only 2-Digits and Even : " << endl;
    int founded = 0;
    for (int i = 0; i < 10; i++)
    {
        int val = (int) DA[i];

        if(val % 2 == 0 && ((val >= 10 && val <= 99) || (val <= -10 && val >= -99)))
        {
            founded = 1;
            cout << DA[i] << "  ";
        }
    }
    if(founded == 0)
        {
            cout << "No Values." << endl;
        }

    // to find the smallest value and the sum of values > 100 and replacing negatives with 0:
    double Smallest = DA[0];
    int small_index = 0;
    double summation = 0.0;
    for(int i = 0; i < size ; i++)
    {
        if(DA[i] < Smallest)
        {
            Smallest = DA[i];
            small_index = i;
        }
        if(DA[i] > 100.0)
        {
            summation += DA[i];
        }
        if(DA[i] < 0)
        {
            DA[i] = 0.0;
        }
    }
    cout << "The index of the smallest value is : i = " << small_index << endl;
    cout << "The Summation of the values greater than (100.0)  = " << summation << endl;

    cout << "The New form of the Array after replacing negatives with 0 is : " << endl;
    for(int i =0; i < 10; i++)
    {
        cout << DA[i] << "   " ;
    }
    cout << endl;

    return 0;
}
