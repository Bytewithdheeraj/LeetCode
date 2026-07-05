class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> medarray;
        for(int i=0;i<nums1.size();i++){
            medarray.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            medarray.push_back(nums2[i]);
        }
        sort(medarray.begin(), medarray.end());
        int n = medarray.size();
        if (n % 2 != 0) {    //if ODD -> n
            return medarray[n / 2];
        } else {             //if EVEN -> n
            double mid1 = medarray[(n / 2) - 1];
            double mid2 = medarray[n / 2];
            return (mid1 + mid2) / 2.0;
        }
    }
};