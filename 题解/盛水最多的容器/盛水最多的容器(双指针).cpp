/*
- 程序设计题目      ：盛水最多的容器 
- 来源              ：LeetCode
- 涉及知识点        ：双指针法 

- 难度评价和重点分析：
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
#include<cstring>

using namespace std;

int main(void){

	vector<int> data;
	int count;
	int tempSize, maxSize;
	cin>>count;
	for(int i=0;i<count;i++){	//输入数据 
		int temp;
		cin>>temp;
		data.push_back(temp);
	}	

	int left=0, right=count-1;	//定义双指针
	while(left<right){
		
		tempSize = (right-left) * (data[left]<data[right]?data[left]:data[right]);	//计算当前盛水体积 
		if(tempSize > maxSize){
			maxSize = tempSize;
		}
		
		if(data[left] < data[right]){	//移动左指针 
			left++;
		}else if(data[left] > data[right]){	//移动右指针 
			right--;
		}else{
			left++;
		}
		
	} 

	cout<<maxSize<<endl;

	return(0);
}




