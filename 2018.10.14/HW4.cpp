#include <iostream>
using namespace std;
int main() {
int n, s=0;
cin»n;
int*m=new int[n];
for(int i=0;i<n;i++){
cin»m[i];
if(((m[i]%27==0) || (m[i]%72==0)) && !((m[i]%27==0) && (m[i]%72==0))){
s+=m[i];
}
}
cout«s;
return 0;
}

