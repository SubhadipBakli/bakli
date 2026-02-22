class Solution {
public:
int chan(int x){//123
int y=x;
    int m =0;
    while(x>0){
        m=m*10;
        m+=x%10;
        x=x/10;
    }

    return y-m;
}
    int countNicePairs(vector<int>& nums) {
        long long  n = nums.size();
        unordered_map<int,long long >map;

        for(int i=0;i<n;i++){
            nums[i]=chan(nums[i]);
            map[nums[i]]++;
        }
        int c = 0;
          int MOD = 1e9 + 7;   
        for(auto i:map){
            long long  n = i.second-1;
            n= n*(n+1);
            n/=2;
            c=(c+n)%MOD;
        
        }

        return c;

 


    }
};