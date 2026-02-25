class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
         
        int n = heights.size();
        vector<int>next(n,0);
        vector<int>prev(n,0);
        
        //NEXT
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[i]<=heights[st.top()]) st.pop();

            if(!st.empty()) next[i]=st.top()-1;
            else next[i] = n-1;

            st.push(i);
        }
        //prev
        stack<int>ts;
        for(int i=0;i<n;i++){
            while(!ts.empty() && heights[i]<=heights[ts.top()]) ts.pop();
 
            if(!ts.empty()) prev[i]=ts.top()+1;
            else prev[i] = 0;
            ts.push(i);
        }

        int Max = INT_MIN;

        for(int i=0;i<n;i++){

            int a = 0;
            if((next[i]-prev[i])>0)
                a=next[i]-prev[i];
            else a = prev[i] -next[i];

            int sa = heights[i]*(a+1);

            if(Max < sa) Max = sa;
        }

        return Max;

    }
}; 