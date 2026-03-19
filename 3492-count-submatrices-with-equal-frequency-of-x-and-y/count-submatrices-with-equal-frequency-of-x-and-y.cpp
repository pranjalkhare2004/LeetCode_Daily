class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        /*
          1.   [][] = X -> Y or .
          2.   [][] = Y -> X or .
          3.   [][] = . -> X or Y
          &&  1 X and Equal number of Y as X



        */
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        vector<int> dpX(n,0), dpY(n, 0);

        for(int i = 0; i<m; i++){
            int rowX = 0, rowY= 0;
            for(int j = 0; j<n; j++){
                if(grid[i][j] == 'X'){
                    rowX++;
                } else if(grid[i][j] == 'Y'){
                    rowY++;
                }
                dpX[j] += rowX;
                dpY[j] += rowY;
                if(dpX[j] > 0 && dpX[j] == dpY[j]) {
                    ans++;
                }
            }
        }

    return ans;
    }
};