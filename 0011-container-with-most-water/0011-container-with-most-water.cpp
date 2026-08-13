class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n - 1;
        int maxWater = 0, area = 0;
        while(l < r){
            int width = r - l;
            int h = min(height[l], height[r]);

            area = h * width;
            maxWater = max(maxWater, area);
            if(height[l] < height[r]){
                l++;
            }
            else {
                r--;
            }
        }
        return maxWater;
    }
};