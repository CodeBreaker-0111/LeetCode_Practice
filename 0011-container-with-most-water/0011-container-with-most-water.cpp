class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int currar = 0, maxar = 0;

        while(left<right)
        {
            currar = min(height[left],height[right]) * (right-left);
            maxar = max(currar, maxar);

            if(height[left] < height[right])
            left++;
            else
            right--;
        }
        return maxar;
    }
};