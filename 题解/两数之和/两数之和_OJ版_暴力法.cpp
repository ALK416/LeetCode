/*
- ���������Ŀ      ������֮��(�����ⷨ) 
- ��Դ              ��LeetCode
- �漰֪ʶ��        �������� 

- �Ѷ����ۺ��ص��������������ʱ�临�Ӷ�ΪO(n^2)����Ҫ�Ľ��� 
*/

#include<iostream>
#include<cstring>

using namespace std;

int main(void){

	int nums[100];	//�������ﲻ֪������ĳ��ȣ����ֶ�ָ����  <100
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

