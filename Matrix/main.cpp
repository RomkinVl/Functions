#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

template <typename T>
void FillRand(T Arr[ROWS][COLS], int ROWS, int COLS);

template <typename T>
void Print(T Arr[ROWS][COLS], int ROWS, int COLS);

template <typename T>
void SumArray(T Arr1[ROWS][COLS], T Arr2[ROWS][COLS], T newArr[ROWS][COLS], int ROWS, int COLS);

template <typename T>
void SubArray(T Arr1[ROWS][COLS], T Arr2[ROWS][COLS], T newArr[ROWS][COLS], int ROWS, int COLS);

template <typename T>
void MultiArray(T Arr1[ROWS][COLS], T Arr2[ROWS][COLS], T newArr[ROWS][COLS], int ROWS, int COLS);

template <typename T>
T Determinant(T Arr[ROWS][COLS], int ROWS, int COLS);

void main()
{
    setlocale(LC_ALL, "");

    cout << "\t*Работа с матрицами*" << endl << endl;

    int Arr1[ROWS][COLS];
    int Arr2[ROWS][COLS];

    cout << "Инициализация двух матриц случайными числами" << endl << endl;

    FillRand(Arr1, ROWS, COLS);
    Print(Arr1, ROWS, COLS);
    cout << endl;

    FillRand(Arr2, ROWS, COLS);
    Print(Arr2, ROWS, COLS);
    cout << endl << endl;

    int Arr3[ROWS][COLS];
    cout << "Результат сложения двух матриц:" << endl;
    SumArray(Arr1, Arr2, Arr3, ROWS, COLS);
    Print(Arr3, ROWS, COLS);
    cout << endl << endl;

    int Arr4[ROWS][COLS];
    cout << "Результат вычитания двух матриц:" << endl;
    SubArray(Arr1, Arr2, Arr4, ROWS, COLS);
    Print(Arr4, ROWS, COLS);
    cout << endl << endl;

    int Arr5[ROWS][COLS];
    cout << "Результат умножения матриц:" << endl;
    MultiArray(Arr1, Arr2, Arr5, ROWS, COLS);
    Print(Arr5, ROWS, COLS);
    cout << endl << endl;

    cout << "Определитель первой матрицы равен " << Determinant(Arr1, ROWS, COLS) << ", определитель второй матрицы равен " << Determinant(Arr2, ROWS, COLS) << endl << endl;

 }

template <typename T>
void FillRand(T Arr[ROWS][COLS], int ROWS, int COLS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            Arr[i][j] = -50 + rand() % 100;
        }
    }
}

template <typename T>
void Print(T Arr[ROWS][COLS], int ROWS, int COLS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << Arr[i][j] << "\t";
        }

        cout << endl;
    }
}

template <typename T>
void SumArray(T Arr1[ROWS][COLS], T Arr2[ROWS][COLS], T newArr[ROWS][COLS], int ROWS, int COLS)
{

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            newArr[i][j] = Arr1[i][j] + Arr2[i][j];
        }
    }

}

template <typename T>
void SubArray(T Arr1[ROWS][COLS], T Arr2[ROWS][COLS], T newArr[ROWS][COLS], int ROWS, int COLS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            newArr[i][j] = Arr1[i][j] - Arr2[i][j];
        }
    }
}

template <typename T>
void MultiArray(T Arr1[ROWS][COLS], T Arr2[ROWS][COLS], T newArr[ROWS][COLS], int ROWS, int COLS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            
                newArr[i][j] = Arr1[i][j] * Arr2[j][i] + Arr1[i][j] * Arr2[j][i] + Arr1[i][j] * Arr2[j][i];
            
        }
    }
}

template <typename T>
T Determinant(T Arr[ROWS][COLS], int ROWS, int COLS)
{
    return Arr[0][0] * Arr[1][1] * Arr[2][2] + Arr[2][0] * Arr[0][1] * Arr[1][2] + Arr[1][0] * Arr[2][1] * Arr[0][2] - Arr[2][0] * Arr[1][1] * Arr[0][2] - Arr[0][0] * Arr[2][1] * Arr[1][2] - Arr[1][0] * Arr[0][1] * Arr[2][2];
}