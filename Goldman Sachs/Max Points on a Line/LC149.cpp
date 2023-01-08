class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        if (n == 1) {
            return 1;
        }
        int result = 2;
        for (int i = 0; i < n; i++) {
            unordered_map<double, int> cnt;
            for (int j = 0; j < n; j++) {
                if (j != i) {
         double x = (double)(points[j][1]-points[i][1])/(double)(points[j][0]-points[i][0]);
                    cnt[x]++;
                }
            }
            for (auto it : cnt) {
                result = max(result, it.second + 1);
            }
        }
        return result;
    }
};
