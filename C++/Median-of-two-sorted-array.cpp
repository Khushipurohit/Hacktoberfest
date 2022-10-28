//Author: Khushi Purohit
//Language: C++


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         for(auto n:nums2)
        {
            nums1.push_back(n);
            
        }
        int size = nums1.size();
        sort(nums1.begin(),nums1.end());
        
        int mid=nums1.size()/2;
        if(nums1.size()%2==0)
        {
            return (double)(mid+(mid-1))/2;
        }
        else
        {
            return (double)(mid-1);
        }
        
         
    }
};
