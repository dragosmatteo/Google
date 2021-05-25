#include <iostream>
#include <fstream>

using namespace std;

ifstream f("graf.txt");

int main () {

    int a[50][50], i ,j, m ,n, x, y,k;
    f>>m>>n;

    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
        a[i][j] = 0;
    
    for(k=1; k<=m; k++){
        f>>x>>y;
        a[x][y] = a[y][x] = 1;
    }

    for(i=1; i<=m; i++) {
        for(j=1; j<=n; j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    f.close();
    return 0;
}