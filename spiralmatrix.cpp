class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int minr=0;
        int maxr=matrix.size()-1;
        int minc=0;
        int maxc=matrix[0].size()-1;
        vector<int> ans;
        int n=matrix.size();
        int m=matrix[0].size();
        int cnt=0;
        int tne=n*m;
        
        while(cnt<tne)
        {
            //top
            for(int i=minr,j=minc; j<=maxc && cnt<tne; j++)
            {
                ans.push_back(matrix[i][j]);
                cnt++;
            }
            minr++;
            //right
            for(int i=minr,j=maxc; i<=maxr && cnt<tne; i++)
            {
                ans.push_back(matrix[i][j]);
                cnt++;
            }
        
            maxc--;
            //bottom
            for(int i=maxr,j=maxc; j>=minc && cnt<tne; j--)
            {
                ans.push_back(matrix[i][j]);
                cnt++;
            }
            maxr--;
            //left
            for(int i=maxr,j=minc; i>=minr && cnt<tne; i--)
            {
                ans.push_back(matrix[i][j]);
                cnt++;
            }
            minc++;
            
        }
       
        return ans;
        
    }
};