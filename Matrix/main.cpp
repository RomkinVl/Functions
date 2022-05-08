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

template <typename T>
void Reverse(T Arr[ROWS][COLS], const int ROWS, const int COLS);

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
    
    cout << "Первая матрица после транспонирования: " << endl;
    Reverse(Arr1, ROWS, COLS);
    Print(Arr1, ROWS, COLS);
    cout << endl << endl;

    cout << "Вторая матрица после транспонирования: " << endl;
    Reverse(Arr2, ROWS, COLS);
    Print(Arr2, ROWS, COLS);
    cout << endl << endl;

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
    return    Arr[0][0] * Arr[1][1] * Arr[2][2]
            + Arr[2][0] * Arr[0][1] * Arr[1][2] 
            + Arr[1][0] * Arr[2][1] * Arr[0][2] 
            - Arr[2][0] * Arr[1][1] * Arr[0][2] 
            - Arr[0][0] * Arr[2][1] * Arr[1][2] 
            - Arr[1][0] * Arr[0][1] * Arr[2][2];
}

template <typename T>
void Reverse(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
    T COL1[3], COL2[3], COL3[3];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (i == 0) COL1[j] = Arr[i][j];
            if (i == 1) COL2[j] = Arr[i][j];
            if (i == 2) COL3[j] = Arr[i][j];
        }
    }

    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            if (i == 0) Arr[j][i] = COL1[j];
            if (i == 1) Arr[j][i] = COL2[j];
            if (i == 2) Arr[j][i] = COL3[j];
        }
    }
}