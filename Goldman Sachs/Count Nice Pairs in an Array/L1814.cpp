using ll=long long;
class Solution {
public:
   int rev(int n){
       string s=to_string(n);
       reverse(s.begin(),s.end());
       return stoi(s);
   }
    int countNicePairs(vector<int>& nums) {
        long long M=1e9+7;
        int n=nums.size();
        unordered_map<int,int> mp;
 
        for(int i=0;i<n;i++){
            int reversed=rev(nums[i]);
            mp[nums[i]-reversed]++;
        }
        long long ret=0;
        for(auto it:mp){
               ret+=((1ll*(it.second)*1ll*(it.second-1))/2)%M;
           
        }
        return ret%M;
    }
};
