//Напишите эффективную программу, находящую все числа длины n являющиеся палиндромами. В комментариях напишите, почему перебор - эффективный
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
int n, a=1;
cin>>n;
if(n%2==0){
for (int i=0; i<n/2; i++){
a*=10;
}
string al=to_string(a);
cout<<a;
for (int i=al.lenght() - 1;i>=0; i--){
cout<<al[i];
}
cout<<endl;
while (a!=pow( 10,n\2+1)){
a++;
al=to_string(a);
cout<<a;
for( int i=al.lenght() - 1;i>=0; i--){
cout<<al[i];
}
cout<<endl;
}
}
return 0;
}
//Программа эффективна, поскольку количество действий программы равно количеству ответов.
