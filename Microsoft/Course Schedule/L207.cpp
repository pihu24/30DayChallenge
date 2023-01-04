class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& prerequisites) {
         
          vector<int> adj[V];
          for(auto it:prerequisites){
              adj[it[1]].push_back(it[0]);
          }

          vector<int> indeg(V,0);
          for(auto i=0;i<V;i++){
              for(auto it:adj[i]){
                  indeg[it]++;
              }
          }
          queue<int> q;
          for(int i=0;i<V;i++){
              if(indeg[i]==0) q.push(i);
          }
          
          vector<int> ans;
          while(!q.empty()){
               int node=q.front();
               q.pop();
               ans.push_back(node);
               for(auto it:adj[node]){
                   indeg[it]--;
                   if(indeg[it]==0)
                   q.push(it);
               }
          }
          if(ans.size()==V) return true;
          else return false;
    }
};
