class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;

        for(auto it:strs){
            string a=it;
            sort(a.begin(),a.end());
            mp[a].push_back(it);
        }
        vector<vector<string>>v;
        for(auto it:mp){
            v.push_back(it.second);
        }
        return v;

    }
};
