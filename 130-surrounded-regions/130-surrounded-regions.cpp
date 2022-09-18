class Solution {
public:
    void convert(vector<vector<char>>& board){
        int n = board.size();
        int m = board[0].size();
        
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(board[i][j]=='B'){
                    board[i][j]='O';
                }
                else if(board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
    }
    bool isValid(int i,int j,int n,int m,vector<vector<char>>& board){
        if(i>=0 && i<n && j>=0 && j<m && board[i][j]=='O'){
            return true;
        }
        return false;
    }
    void DFS(int i,int j,int n,int m,vector<vector<char>>& board){
        board[i][j]='B';
        
      if(isValid(i-1,j,n,m,board)){
            DFS(i-1,j,n,m,board);
        }
         if(isValid(i,j+1,n,m,board)){
            DFS(i,j+1,n,m,board);
        }
         if(isValid(i+1,j,n,m,board)){
            DFS(i+1,j,n,m,board);
        }
         if(isValid(i,j-1,n,m,board)){
            DFS(i,j-1,n,m,board);
        } 
        /*  i+1,j
            i-1,j
            i,j+1
            i,j-1
        */    
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        
        for(int i=0;i<n;++i){
            
            int j = 0;
            // left:- top---> bottom
            if(board[i][j]=='O'){
                 DFS(i,j,n,m,board);
            }
            
            j = m-1;
            // right:- top--->bottom
            if(board[i][j]=='O')
            {
                DFS(i,j,n,m,board);
            }
            
        
        }
          
        for(int j=0; j<m;++j){
            
            int i=0;
            // top:- left--->right
            if(board[i][j]=='O'){
                DFS(i,j,n,m,board);
            }
            
            i = n-1;
            // down:- left--->right
            if(board[i][j]=='O'){
                 DFS(i,j,n,m,board);
            }
        }
        convert(board);
        
    }
};