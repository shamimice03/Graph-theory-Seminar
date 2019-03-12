#include<bits/stdc++.h>
using namespace std;
bool visited[2000];
vector<int>edges[2000];
int color[2000];


void BFS(int s)
{
    queue<int>Q;
    Q.push(s);
    visited[s]=1;
    color[s]=2;
    while(!Q.empty()){

      int u=Q.front();
        Q.pop();
        cout<<"u "<<u<<endl;
        for(int i=0; i<edges[u].size(); i++){

             if(visited[edges[u][i]]!=1){

                int v=edges[u][i];
                Q.push(v);
                visited[v]=1;
                cout<<"v ----->"<<v<<" ";
                if(color[u]==2){
                   color[v]=3;
                   cout<<"Color "<<"BLUE"<<endl;
                }
                else {color[v]=2;
                cout<<"Color "<<"RED"<<endl;
                }

            }
            else{
                int v=edges[u][i];
                if(color[u]==color[v]){cout<<"NOT BIPARTITE"<<endl; return;}
            }

        }
    }
    cout<<"BIPARTITE."<<endl;
}

int main()
{

    int n,e,v,u,start;



    cin>>e;

    for(int i=1; i<=e; i++)
    {
        cin>>u>>v;

        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    cout<<endl;

    BFS(v);





    return 0;

}


/*

7

1 2
1 5
1 3
5 6
6 4
3 4
2 6

NOT BIPARTITE

6

1 2
1 5
1 3
5 6
2 6
3 6

BIPARTITE

*/

