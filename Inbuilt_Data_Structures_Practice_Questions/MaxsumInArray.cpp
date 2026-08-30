#include<iostream>
#include<vector>
using namespace std;
int maxsum(vector<int>& nums,int n){
    int sum=0;
    for(int i =0;i<nums.size();i++){
        if(nums[i]<=0){
            continue;
        }
        else{
            sum+=nums[i];
        }
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<maxsum(nums,n);

    return 0;
}