class Solution {
public:
    int evalRPN(vector<string>& s) {
        stack<int> stk;
        for(int i=0;i<s.size();i++){
            if(s[i]=="*"||s[i]=="-"||s[i]=="/"||s[i]=="+"){
                int a=stk.top();
                stk.pop();
                int b=stk.top();
                stk.pop();

        if(s[i]== "+") stk.push( a + b);
        else if(s[i] == "-") stk.push(b-a);
        else if(s[i] == "*") stk.push(a * b);
        else stk.push(b/a);
            }
            else{
                stk.push(stoi(s[i]));
            }
        }
        return stk.top();
    }
};
