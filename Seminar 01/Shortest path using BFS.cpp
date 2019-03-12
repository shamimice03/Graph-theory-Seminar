#include<bits/stdc++.h>
using namespace std;
bool visited[100];
int parent[100];

vector<int>edges[100];

void BFS(int s,int des){

  queue<int>Q;

  Q.push(s);

  visited[s]=1;

  while(!Q.empty()){

    int u=Q.front();
    cout<<"u "<<u<<endl;
    Q.pop();

    for(int i=0; i<edges[u].size(); i++){

        if(visited[edges[u][i]]!=1){

            int v=edges[u][i];
            visited[v]=1;
            cout<<"v ----->"<<v<<" "<<endl;
            parent[v]=u;
            cout<<"parent of "<<v<<" is "<<u<<endl;
            Q.push(v);
        }

        if(visited[des]==1) break;
    }
  }

 cout<<endl;
 cout<<"Shortest path : "<<endl<<endl;

 vector<int>path;
  path.push_back(des);
  int b=des;
  while(b!=s){
    b=parent[b];
    path.push_back(b);
  }
reverse(path.begin(),path.end());
  for(int i=0; i<path.size(); i++)
     cout<<path[i]<<" ---> ";

     cout<<endl;
  return;



}

int main()
{
    int n,e,u,v,start,End;

    cin>>n>>e;

    for(int i=1; i<=e; i++)
    {
        cin>>u>>v;

        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    cin>>start>>End;

    cout<<endl;

    BFS(start,End);

    return 0;
}

/*

6 7

1 2
1 5
1 3
5 6
6 4
3 4
2 6

1 6

*/

