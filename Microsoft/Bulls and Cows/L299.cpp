class Solution {
public:
    string getHint(string secret, string guess) {
        int n=secret.size();
        int bulls=0;
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i]){
                bulls++;
            }
            else{
                mp[secret[i]]++;
            }
        }
        int cow=0;
        for(int i=0;i<n;i++){
            if(secret[i]!=guess[i]&&mp[guess[i]]>0){
                mp[guess[i]]--;
                cow++;
            }
        }
        string s;
        s=to_string(bulls)+"A"+to_string(cow)+"B";
        return s;
        
    }
};
