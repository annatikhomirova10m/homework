//Реализуйте решение непрерывной задачи о рюкзаке


#include <iostream>
using namespace std;
int main()
{
int M;
cin >> M;
int N;
int *m = new int[N];
int *c = new int[N];
double *w = new double[N];
for(int i = 0; i < N; i++)
{
cout << "масса: "; cin >> m[i];
cout << "цена: "; cin >> c[i];
w[i] = m[i] / c[i];
}
double max = w[0];
int j = 0;
for(int i = 1; i < N; i++)
{
if(max < w[i])
{
max = w[i];
j = i;
}
}
double W = M / m[j];
cout << W*c[j];
return 0;
}
