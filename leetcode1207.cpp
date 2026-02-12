class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_set<int>se;

        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }

        for(auto it:mp){
        if(se.find(it.second)!=se.end()) return false;
            se.insert(it.second);
        }
        return true;
    }
};