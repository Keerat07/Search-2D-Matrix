class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // if(matrix.length()==0)return false;
        int n1=matrix.size();
        int n2=matrix[0].size();
        int end=(n1*n2)-1;
        int start=0;
        while(start<=end){
            int mid=(start+(end-start)/2);
            int i=mid/n2;
            int j=mid%n2;
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j]>target){
                
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return false;
    }
};
