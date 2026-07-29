class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> nsl(n);   // Next Smaller Left
        vector<int> nsr(n);   // Next Smaller Right
        stack<int> s;

        // Next Smaller Left
        for(int i = 0; i < n; i++){
            while(!s.empty() && heights[i] <= heights[s.top()]){
                s.pop();
            }

            if(s.empty()){
                nsl[i] = -1;
            }
            else{
                nsl[i] = s.top();
            }

            s.push(i);
        }

        while(!s.empty()){
            s.pop();
        }

        // Next Smaller Right
        for(int i = n - 1; i >= 0; i--){
            while(!s.empty() && heights[i] <= heights[s.top()]){
                s.pop();
            }

            if(s.empty()){
                nsr[i] = n;
            }
            else{
                nsr[i] = s.top();
            }

            s.push(i);
        }

        int maxArea = 0;

        for(int i = 0; i < n; i++){
            int width = nsr[i] - nsl[i] - 1;
            int area = heights[i] * width;
            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};