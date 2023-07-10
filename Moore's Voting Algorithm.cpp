// https://www.geeksforgeeks.org/boyer-moore-majority-voting-algorithm/

//problem_link: https://leetcode.com/problems/majority-element/


class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count=0,element=0,n= nums.size();
       for(int i=0;i<n;i++)
       {
           //2, 2, 1, 1, 1, 2, 2
          if(count==0)
             element=nums[i];//2 //1 //1
          if(nums[i]==element)
             count++;//1//2 //1 //1
          else
             count--;//1//0 //0
       }
       return element;
    }
};