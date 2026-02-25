class Solution {
public:
    int calPoints(vector<string>& s) {
        int n=s.size();

        stack<int>st;

        for(int i=0;i<n;i++){
            if(s[i]=="C") st.pop();

            else if(s[i]=="D") st.push(st.top()*2);

            else if(s[i]=="+"){
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                int c= a+b;

                st.push(b);
                st.push(a);
                st.push(c);
            }
            else st.push(stoi(s[i]));
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};
