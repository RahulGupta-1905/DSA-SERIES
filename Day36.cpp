// Question 1 Combination Sum 2
//  https://leetcode.com/problems/combination-sum-ii/
class Solution {
public:
    void dfs(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& temp, int index){
        if (target == 0) {
            res.push_back(temp);
            return;
        }
        for (int i = index; i < candidates.size(); ++i){
            if (i > index && candidates[i] == candidates[i - 1]) continue;
            if (candidates[i] > target) break;
            temp.push_back(candidates[i]);
            dfs(candidates, target - candidates[i], res, temp, i + 1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target){
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> temp;
        dfs(candidates, target, res, temp, 0);
        return res;
    }
};

//  Question 2 Combination Sum 1
// https://leetcode.com/problems/combination-sum/
class Solution {
public:
    void dfs(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& temp, int index){
        if (target == 0) {
            res.push_back(temp);
            return;
        }
        for (int i = index; i < candidates.size(); ++i) {
            if (candidates[i] > target) continue;
            temp.push_back(candidates[i]);
            dfs(candidates, target - candidates[i], res, temp, i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target){
        vector<vector<int>> res;
        vector<int> temp;
        dfs(candidates, target, res, temp, 0);
        return res;
    }
};
