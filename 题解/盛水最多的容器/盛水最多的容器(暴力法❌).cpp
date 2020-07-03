/*
- 程序设计题目      ：盛水最多的容器(暴力法)
- 来源              ：LeetCode
- 涉及知识点        ： 

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
	int maxSize = 0;
	int tempSize = 0;
	int result;
	
	int count = 0;
	cin>>count;
	for(int i=0;i<count;i++){	//输入数据 
		int temp;
		cin>>temp;
		data.push_back(temp);
	}

	for(int i=0;i<count;i++){
		for(int j=i+1;j<count;j++){
			tempSize = (j-i) * (data[i]<=data[j]?data[i]:data[j]);	//计算当前情况盛水体积
			if(tempSize > maxSize){
				maxSize = tempSize;
			} 
		}
	}

	cout<<maxSize<<endl;

	return(0);
}






