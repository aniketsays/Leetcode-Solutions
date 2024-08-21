https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {

         int area = 0;
         int lowptr = 0;
         int highptr = height.size() - 1;

        while(lowptr < highptr){
            int temp_width = highptr - lowptr;
            int temp_min_ht = min(height[lowptr], height[highptr]);

            int temp_area = temp_width * temp_min_ht;
            area = max(temp_area, area);

            if(height[lowptr] < height[highptr]){
                lowptr++;
            }
            else{
                highptr--;
            }

        }

        return area;





        //Brute Force: Initialize two for loops, compute the max area between each two containers
        //Optimal: Use 2-pointers, initialized at 0 and n-1 respt, calculate area, store into max if applicable, else if heights[low] < heights[high] increment low ptr else decrement high pointer because we want to maximize area
        
    }
};