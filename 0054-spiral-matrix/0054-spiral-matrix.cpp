class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        
        int n=matrix.size();
        int m=matrix[0].size();
        
        int left=0;
        int right=m-1;
        
        int top=0;
        int bottom=n-1;
        
        while(left<=right && top<=bottom)
        {
            if(top<=bottom)
            {
                // print left->right
                for(int i=left;i<=right;i++)
                {
                    res.push_back(matrix[top][i]);
                }
                
                top++;
                
                
            }
            
            if(left<=right){
            // print top->bottom
                
                for(int i=top;i<=bottom;i++) 
                {
                    res.push_back(matrix[i][right]);
                }
                right--;
            }
            
             if(top<=bottom)
             {
                // print right->left
                for(int i=right;i>=left;i--)
                {
                    res.push_back(matrix[bottom][i]);
                }
                
                bottom--;
                
             }
            
            if(left<=right){
            // print bottom->top
                
                for(int i=bottom;i>=top;i--) 
                {
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
            
            
        }
        
        return res;
    }
};