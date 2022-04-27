#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

void sort_bubble(int*);
void sort_bubble(double*);

int main()
{
    int *a = new int[10];
    double *b = new double[10];
    cout << "Source array: [";          /* генерируем массив */
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        int temp = 1 + rand() % 15;
        a[i] = temp;
        if (i == 9) {
            cout << temp;
        }
        else {
            cout << temp << ",";
        }
    }

    cout << "]" << endl;
    sort_bubble(a);
    cout << "Finish array: [";
    for (int i = 0; i < 10; i ++)
    {
        if (i == 9) {
            cout << a[i];
        }
        else {
            cout << a[i] << ",";
        }
    }
    cout << ']' << endl;
    cout << "Source array: [";
    for (int i = 0; i < 10; i++) {
        double temp = (1 + rand() % 30) / 2.0;
        b[i] = temp;
        if (i == 9) {
            cout << temp;
        }
        else {
            cout << temp << ",";
        }
    }
    cout << "]" << endl;
    sort_bubble(b);

    cout << "Finish array: [";
    for (int i = 0; i < 10; i ++)
    {
        if (i == 9) {
            cout << b[i];
        }
        else {
            cout << b[i] << ",";
        }
    }
    cout << ']' << endl;
    return 0;
}

void sort_bubble(int* list) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++){
            if (list[j] < list[j + 1]){
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}

void sort_bubble(double* list) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++){
            if (list[j] < list[j + 1]){
                double temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}