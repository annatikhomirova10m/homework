//Реализуйте вычисление значения полинома в точке посредством схемы Горнера

#include "pch.h" 
#include <iostream> 
using namespace std; 
float horner(float varX, int maxN, float *varMA) { 
float s; 
int i; 
s = varMA[maxN]; 
for (i = maxN; i > 0; i--) { 
s = s * varX + varMA[i - 1]; 
} 
return s; 
} 
int main() 
{ 
int N; 
float X; 
setlocale(LC_ALL, "Rus"); 
cout << "Введите степень полинома " << endl; 
cin >> N; 
cout << "Введите число Х " << endl; 
cin >> X; 
float *mA = new float[N + 1]; 
for (int i = 0; i <= N; i++) { 
mA[i] = rand(); 
} 
cout << endl << "Значения полинома в точке посредством схемы Горнера: " << horner(X, N, mA) << endl; 
return 0; 
}
