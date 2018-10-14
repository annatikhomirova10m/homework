#include <iostream>
using namespace std;
int main() {
int x, n, y;
cin>>x;
cin>>n;
for(int i=1;i<x;i++){
if((n*i+1)%x==0){
y=(n*i+1)/x;
cout«"N="«y«endl;
return 0;
}
}
cout«"None";
return 0;
}
