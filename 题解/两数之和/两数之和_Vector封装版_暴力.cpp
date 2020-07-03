/*
- 程序设计题目      ：两数之和 
- 来源              ：LeetCode
- 涉及知识点        ：暴力法 

- 难度评价和重点分析：本方法假设解仅有一个 
*/

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<string>

using namespace std;

vector<int> solution(vector<int> &nums, int target);

int main(void){

	vector<int> nums;
	int count = 0;
	int target = 0;
	
	cin>>count;
	int inputTemp;
	for(int i=0;i<count;i++){	//输入数据 
		cin>>inputTemp;
		nums.push_back(inputTemp);
	}

	cin>>target;	//输入目标数字
	
	vector<int> result = solution(nums, target); 

	if(result.size() == 0){
		cout<<"无解"<<endl; 
	}else{
		cout<<result[0]<<" "<<result[1]<<endl;
	}

	return(0);
}

vector<int> solution(vector<int> &nums, int target){
	int length = nums.size();
	vector<int> result;
	
	for(int i=0;i<length;i++){
		for(int j=i+1;j<length;j++){
			
			if(target - nums[i] == nums[j]){
				result.push_back(i);
				result.push_back(j);
				return(result);
			}
			
		}
	}
	//如果在此处返回，则意味着结果为空
	return(result); 
}








