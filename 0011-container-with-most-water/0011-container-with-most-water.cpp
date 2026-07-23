class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxArea = 0;
        int n = height.size();
        int i = 0;
        int j = n-1;

        while(i<j)
        {
            int wd = j-i;
            int ht = min(height[i], height[j]);

            int currwt = ht * wd;

            maxArea = max(maxArea, currwt);

            if(height[i]<height[j])
            {
                i++;
            }
            else
                j--;
        }
        return maxArea;
    }
};