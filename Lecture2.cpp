#include<bits/stdc++.h>
using namespace std;

int firstOccurance(vector<int> nums,int start,int end,int target){

    if(start>end){
        return -1;
    }
    else if(start==end){
        return (nums[start]==target? start :-1);
    }
    else{
    int mid=start+  (end-start)/2;
    if(nums[mid]<target){
        return firstOccurance(nums,mid+1,end,target);
    }
    else if(nums[mid]>target){
        return firstOccurance(nums,start,mid-1,target);
    }
    else{
        if((mid==0) || (mid>=1 && nums[mid-1]< nums[mid])){
            return mid;
            return firstOccurance(nums,mid+1,end,target);
           
        }
    }
}
}

int lastOccurance(vector<int> nums,int start,int end,int target){

    if(start>end){
        return -1;
    }
    else if(start==end){
        return (nums[start]==target? start :-1);
    }
    else{
    int mid= start+  (end-start)/2;
    if(nums[mid]<target){
        return lastOccurance(nums,mid+1,end,target);
    }
    else if(nums[mid]>target){
        return lastOccurance(nums,start,mid-1,target);
    }
    else{
        if((mid==nums.size()-1) || (mid+1<=end && nums[mid]< nums[mid+1])){
            return mid;
            return lastOccurance(nums,start,mid-1,target);
           
        }
    }
}
}




vector<int> firstAndLastOccurance(vector<int> &nums,int target){
    int first= firstOccurance(nums,0,nums.size()-1,target);
    int last= lastOccurance(nums,0,nums.size()-1,target);
    return (first,last);
}

int main{

}