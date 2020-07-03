/*
- ���������Ŀ      ��ʢˮ�������� 
- ��Դ              ��LeetCode
- �漰֪ʶ��        ��˫ָ�뷨 

- �Ѷ����ۺ��ص������
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
	for(int i=0;i<count;i++){	//�������� 
		int temp;
		cin>>temp;
		data.push_back(temp);
	}	

	int left=0, right=count-1;	//����˫ָ��
	while(left<right){
		
		tempSize = (right-left) * (data[left]<data[right]?data[left]:data[right]);	//���㵱ǰʢˮ��� 
		if(tempSize > maxSize){
			maxSize = tempSize;
		}
		
		if(data[left] < data[right]){	//�ƶ���ָ�� 
			left++;
		}else if(data[left] > data[right]){	//�ƶ���ָ�� 
			right--;
		}else{
			left++;
		}
		
	} 

	cout<<maxSize<<endl;

	return(0);
}




