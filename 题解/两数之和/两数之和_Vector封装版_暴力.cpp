/*
- ���������Ŀ      ������֮�� 
- ��Դ              ��LeetCode
- �漰֪ʶ��        �������� 

- �Ѷ����ۺ��ص��������������������һ�� 
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
	for(int i=0;i<count;i++){	//�������� 
		cin>>inputTemp;
		nums.push_back(inputTemp);
	}

	cin>>target;	//����Ŀ������
	
	vector<int> result = solution(nums, target); 

	if(result.size() == 0){
		cout<<"�޽�"<<endl; 
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
	//����ڴ˴����أ�����ζ�Ž��Ϊ��
	return(result); 
}








