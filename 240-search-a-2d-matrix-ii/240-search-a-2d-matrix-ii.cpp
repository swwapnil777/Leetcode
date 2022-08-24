class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mt, int target) {
        int n = mt.size();
        int m = mt[0].size();
        int r = 0;
        int c =m-1;
        while(r<n and c>=0){
            if(mt[r][c]==target) return true;
            else if(target>mt[r][c]){
                r++;
            }
            else{
                c--;
            }
        }
        return false;
    }
};