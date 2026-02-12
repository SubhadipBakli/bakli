class Solution {
public:
string rev(string s){
     reverse(s.begin(),s.end());
     return s;
}
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        unordered_set<string>s;

        int c =0;
        s.insert(words[0]);
        for(int i=1;i<n;i++){
            if(s.find(words[i])!=s.end() || s.find(rev(words[i])) != s.end()){
                c++;
            }
            s.insert(words[i]);
        }
        return c;

    }
};