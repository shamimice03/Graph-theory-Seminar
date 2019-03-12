#include<bits/stdc++.h>
using namespace std;

int main()
{

    int matrix[777778][900000]={0};
    int a,b,n,e;

    cin>>n>>e;

    for(int i=0; i<e; i++){

        cin>>a>>b;
        matrix[a][b]=1;
        //matrix[b][a]=1;
    }

    cout<<endl;


    for(int i=1; i<=n; i++){
           //cout<<i<<" ";
        for(int j=1; j<=n; j++){
            cout<<i<<" "<<j<<" "<<matrix[i][j]<<" "<<endl;
    }
    cout<<endl;
    }


      return 0;
}
