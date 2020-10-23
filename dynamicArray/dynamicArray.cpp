// dynamicArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    /*Инициализация размерности массива*/
    int N, M;
    cout << "Input N: ";
    cin >> N;
    cout << "Input M: ";
    cin >> M;
    
    /*Объявление и заполнение одномерного массива из N элементов*/
    int *arrayN = new int[N];
    for (int i = 0; i < N; i++) {
        cout << "Input Array[" << i << "]: ";
        cin >> arrayN[i];
    }

    /*Объявление N x M*/
    int **arrayNxM = new int* [N];
    for (int i = 0; i < N; i++) {
        arrayNxM[i] = new int[M];
    }
    /*Заполнение массива NxM*/
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Input Array[" << i << "][" << j << "]: ";
            cin >> arrayNxM[i][j];
        }
    }

    /*Здесь собственно логика программы. С массивом обращаешься как обычно - arrayNxM[i][j]*/

    /*Удаление одномерного массива*/
    delete [] arrayN;

    /*Удаление двумерного массива*/
    for (int i = 0; i < N; i++) {
        delete[] arrayNxM[i];
    }

}

