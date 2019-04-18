#include<iostream> 
#include<string.h>
#include<vector>
using namespace std;

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        int i = 0,j = 0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i]<nums2[j]){
                nums.push_back(nums1[i]);
                i++;
            }else{
                nums.push_back(nums2[j]);
                j++;
            }
        }
        while(i < nums1.size()){
                            nums.push_back(nums1[i]);
            i++;
        }
        while(j < nums2.size()){
            nums.push_back(nums2[j]);
            j++;
        }
        
        if(nums.size()%2 == 0){
            return (nums[(nums.size()/2)]+nums[(nums.size()/2)-1])/2.0;
        }else
        {
            return (double)nums[(nums.size()/2)];
        }
        
    }
    
int main(){
	vector<int > a,b;
	a.push_back(1) ;
	a.push_back(2) ;
	b.push_back(3) ;
	b.push_back(4) ;
	cout<<findMedianSortedArrays(a,b);
	return 0;
}
