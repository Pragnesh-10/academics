#include <iostream>
using namespace std;

class Matrix
{
    int a[2][2];

public:

    void getData()
    {
        cout << "Enter 4 elements of matrix:" << endl;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    // Overloading + operator
    Matrix operator+(Matrix m)
    {
        Matrix temp;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }

        return temp;
    }

    void display()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Matrix m1, m2, result;

    cout << "Enter First Matrix:" << endl;
    m1.getData();

    cout << "Enter Second Matrix:" << endl;
    m2.getData();

    result = m1 + m2;

    cout << "Resultant Matrix:" << endl;
    result.display();

    return 0;
}