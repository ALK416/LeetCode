/*
- ���������Ŀ      ������Ԫ�� 
- ��Դ              ��LeetCode
- �漰֪ʶ��        ��

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
#include<map>

using namespace std;

bool cmp(int x, int y);

int main(void){

	vector<int> data;
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){	//�������� 
		int temp;
		cin>>temp;
		data.push_back(temp);
	}

	sort(data.begin(), data.end(), cmp);

	cout<<data[n/2]<<endl;

	return(0);
}

bool cmp(int x, int y){
	return(x > y);
}






