#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n!=0){
            int num[m+n];
            int i=0,j=0;
            int k=0;
            while(i<m && j<n){
                if(nums1[i]<=nums2[j]){
                    num[k] = nums1[i];
                    i++;
                    k++;
                }
                else{
                    num[k] = nums2[j];
                    j++;
                    k++;
                }
            }
            while(i<=m-1){
                num[k] = nums1[i];
                i++;
                k++;
            }
            while(j<=n-1){
                num[k] = nums2[j];
                j++;
                k++;
            }

            for(int i =0;i<m+n;i++){
            nums1[i] = num[i];
            }
        }
    }
        
};

int main(){
    Solution s;
    std::vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    std::vector<int> nums2 = {2,5,6}; 
    int n = 3;
    s.merge(nums1, m, nums2, n);
}