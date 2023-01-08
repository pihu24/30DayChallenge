class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        
        vector<int> x;
        x.push_back(p1[0]);
         x.push_back(p2[0]);
          x.push_back(p3[0]);
           x.push_back(p4[0]);
        
        vector<int> y;
        y.push_back(p1[1]);
         y.push_back(p2[1]);
          y.push_back(p3[1]);
           y.push_back(p4[1]);
      
      unordered_set<int> st;
      for(int i=0;i<4;i++){
         for(int j=i+1;j<4;j++){
             int k=pow(x[j]-x[i],2)+pow(y[j]-y[i],2);
             st.insert(k);
         }
      }

     if(!st.count(0)&&st.size()==2) return true;
     return false;
      
     
    }
};
