#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix){
    int mark = -101;
    int r = matrix.size(), c = matrix[0].size();
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(matrix[i][j]==0){
                // mark row
                for(int k=0; k<c; k++)
                    if(matrix[i][k] != 0) matrix[i][k] = mark;
                // mark column
                for(int k=0; k<r; k++)
                    if(matrix[k][j] != 0) matrix[k][j] = mark;
            }
        }
    }
    
    // mark -> 0
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(matrix[i][j] == mark)
                matrix[i][j] = 0;
        }
    }

}

int main(){
    vector<vector<int>> m = {
        {1, 2, 3}, 
        {4, 0, 6},
        {7, 8, 9}
    };
    setZeros(m);
    for(int i=0; i<m.size(); i++){
        for(int j=0; j<m[0].size(); j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}