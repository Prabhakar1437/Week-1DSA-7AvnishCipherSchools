#include<bits/stdc++.h>
using namespace std;


vector<int> spiralMatrix(vector<vector<int>> mat){
    int sx=0,sy=0,ex=mat.size()-1,ey=mat[0].size()-1;
    vector<int> result(mat.size()*mat[0].size());
    while(sx<=ex && sy<=ey){
        for(int j=sy;j<ey;j++){
            result[ctr]=mat[sx[j]];
            ctr++;
        }
        sx++;
        for(int i=sx;i<ex;i++){
            result[ctr]=mat[i[ey]];
            ctr++;
    }
    ey--;

    if(sx<=ex){
        for(int j=ey;j>=sy;j--){
            result[ctr]=mat[ex[j]];
            ctr++;

    }
     ex--;
    }
    
   
    if(sy<=ey){
    for(int i=ey;i>=sx;i--){
            result[ctr]=mat[i[sy]];
            ctr++;

}
   sy++;

        }
    }
}

int main(){

}