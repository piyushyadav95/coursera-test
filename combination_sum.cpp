class Solution {
public:
   void findcomb(int index,int target,vector<int> &cand,vector<vector<int>> &ans,vector<int> &ds){
       if(index == cand.size()){     //base case
           if(target==0){
             ans.push_back(ds);
       }
       return;
   }

   //Picking up the elements
    if(cand[index] <= target){
         ds.push_back(cand[index]);
         findcomb(index,target-cand[index],cand,ans,ds);
         ds.pop_back(); 
    }
    findcomb(index+1,target,cand,ans,ds);
}

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findcomb(0,target,candidates,ans,ds);
        return ans;   
    }
};