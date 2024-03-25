class Solution {
public:
    void recurPermute(vector<int> &nums ,vector<int> &ds,vector<vector<int>>&ans,int freq[]){
      if(ds.size()==nums.size()){
          ans.push_back(ds);
            return;
      }
      for(int i=0;i<nums.size();i++){
          if(freq[i]==0){
              ds.push_back(nums[i]);
              freq[i]=1;
              recurPermute(nums,ds,ans,freq);
              freq[i]=0;
              ds.pop_back();
          }
      }
}

public:
    vector<vector<int>> permute(vector<int>& nums) {
           vector<vector<int>> ans;
           vector<int> ds;
           int freq[nums.size()];  //array
           for(int i=0;i<nums.size();i++){
              freq[i]=0;
           }
           recurPermute(nums,ds,ans,freq);
           return ans;
    }
};