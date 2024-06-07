#include <iostream>
using namespace std;

void dynamicDoubleArray(int rows, int columns);
int main()
{
    // get dimensions via user input
    // if dimensions > 3 :
    //      invalid input, enter number between 0 and 2 (2 included)
    // else if dimensions = 1
    //      double[dimensions];
    // else if dimensions > 0 && dimensions <= 2:
    //      double[dimensions[dimensions]];
    // else
    //      number cannot be 0
    int dime = 0;
    int rows;
    int columns;

    cout
        << "Enter number of dimensions: ";
    cin >> dime;
    if (dime >= 3)
    {
        cout << "invalid input" << endl;
    }
    else if (dime > 0 && dime <= 2)
    {

        dynamicDoubleArray(dime, dime);
    }
    else
    {
        cout << "number cannot be 0 or negative" << endl;
    }

    return 0;
}

void dynamicDoubleArray(int rows, int columns)
{
    // double arraySize(double twoDimearr[2][2]);
    double arr[rows][columns];
    // double arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // number of rows
    int rowNum = sizeof(arr) / sizeof(arr[0]);
    // cout << "rows: " << rowNum << endl;

    // number of columns
    int colNum = sizeof(arr) / sizeof(arr[0][0]);
    // cout << "columns: " << colNum << endl;

    // cout << "elements per row: " << colNum / rowNum << endl;
    // cout << "  " << endl;
    // cout << "  " << endl;
    // int loopvarformanyelements = ((colNum - rowNum) - 1);
    int n = colNum / rowNum;

    // assign elements
    for (int i = 0; i < rowNum; i++)
    {
        cout << "Enter values for row: " << i << endl;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    // print out the elements
    cout << "Elements of the array: ";
    for (int i = 0; i < rowNum - 1; i++)
    {
        for (int j = 0; j < colNum; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
}
