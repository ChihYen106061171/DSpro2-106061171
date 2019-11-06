#include <iostream>
#include<fstream>
using namespace std;


int main()
{
    int m,n,ba,i,j;

     ifstream test;
     test.open("floor.data.txt",ios::in);

     test>>m>>n>>ba;


     char **map = new char*[m];
     for(i=0;i<m;i++){
          map[i] = new char[n];
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            test>>map[i][j];
        }
    }

    return 0;
}
