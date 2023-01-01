class Solution {
public:
    void find(int k,int n,vector<vector<int>> &ans,vector<int> &ds,int count){
        if(k==0){
            if(n==0){
                ans.push_back(ds);
                return;
            }
        }
        if(count>9) return;
        ds.push_back(count);
        find(k-1,n-count,ans,ds,count+1);
        ds.pop_back();
        find(k,n,ans,ds,count+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        find(k,n,ans,ds,1);
        return ans;
    }
};
