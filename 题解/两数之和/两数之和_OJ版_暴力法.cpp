/*
- 程序设计题目      ：两数之和(暴力解法) 
- 来源              ：LeetCode
- 涉及知识点        ：暴力法 

- 难度评价和重点分析：暴力法，时间复杂度为O(n^2)，需要改进！ 
*/

#include<iostream>
#include<cstring>

using namespace std;

int main(void){

	int nums[100];	//假设这里不知道数组的长度，是手动指定的  <100
	memset(nums, 0, sizeof(nums));
	int target = 0;
	cin>>target;
	
	int count = 0;
	cin>>count;
	for(int i=0;i<count;i++){
		cin>>nums[i];
	}

	for(int i=0;i<count;i++){
		for(int j=i+1;j<count;j++){
			if(target - nums[i] == nums[j]){
				cout<<i<<" "<<j<<endl;
			}
		}
	}

	return(0);
}

