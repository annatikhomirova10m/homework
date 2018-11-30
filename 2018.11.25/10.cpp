//Напишите функцию вычисляющую праймориал числа. Программа должна работать не более чем за O(n*log log n) шагов.



#include <iostream>
#include <vector>
using namespace std;
int main(){
int n;
cin>>n;
vector <int> ar(n);
ar.assign(n, 1);
ar[0]=0;
ar[1]=0;
for(int i=2; i<n; i++){ 
if(ar[i]==1){
for(int j=i*2; j<n;j+=i){
ar[j]=0;
}
}
}
int p=1;
for(int i=2;i<n; i++){
if(ar[i]==1) p*=i;
}
cout<<p;
return 0;
}
//Программа эффективна, поскольку мы не просто перебираем простые числа, что было бы дольше, а пользуемся решетом Эратосфена
