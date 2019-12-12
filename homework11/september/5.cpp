#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<vector<bool» g; 
int main(){
  int n,m; 
  cin>>n>>m; 
  g.resize(n); 
  for(int i=0;i<n;i++)
  g[i].resize(n); 
  for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y; 
    g[x][y]=1; 
    g[y][x]=1;
    } 
  queue <int> q;
  vector <int> t;
  for(int i=0;i<n;i++)q.push(i);
  while(n--){
    int x=q.front();
    q.pop();
    int y=q.front();
    if(!g[x][y]){
      int f; 
      while(!q.empty()){
        t.push_back(q.front());
        q.pop(); 
        }
       int j=0;
       bool flag; 
       for(int i=0;i<t.size();i++){ 
        if(!flag && t[i]!=x && t[i]!=y && g[x][t[i]] && g[y][t[i+1]]){ 
          flag = true; break;
          }
        if(flag){ 
          swap(t[j],t[i]); j++; 
          } 
        } 
        for(int i=0;i<t.size();
        i++)q.push(t[i]); 
        t.clear();
        q.push(x);
        }
      if(n==0)while(!q.empty()){
        cout<<q.front()<<" "; 
       }
    }
}
