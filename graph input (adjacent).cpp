#include<bits/stdc++.h>
using namespace std;
#define MAX 100000

vector<int>edges[MAX];
vector<int>cost[MAX];

int main()
{

  int N,E,i;
  cin>>N>>E;



  for(i=1; i<=E; i++){

    int x,y;

    cin>>x>>y;

    edges[x].push_back(y);
    //edges[y].push_back(x);

   // cost[x].push_back(1);
   // cost[y].push_back(1);
  }

  cout<<endl<<endl;

  for(int i=1; i<=N; i++){
        cout<<i<<"  ->> ";
     for(int j=0; j<edges[i].size(); j++){

        cout<<edges[i][j]<<" ";

     }

     cout<<endl;
  }

    return 0;
}

