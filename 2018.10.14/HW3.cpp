#include <iostream>
using namespace std;
int main() {
int n,i=0;
float sum;
while(n!=0){
cin»n;
sum+=n;
i++;
}
cout«"Среднее арифметическое = "«(sum/i)«endl;
return 0;
}
