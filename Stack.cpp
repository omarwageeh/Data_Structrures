#include <iostream>
#include <string.h>
using namespace std;
int arr[int(1e4)];
struct stk{
 
 
	int last=-1;
	int pop()
	{
		if(isEmpty())
			return 0;
		arr[last]=-1;
		last--;
		return 1;
	}
	int push(int i)
	{
		last++;
		if(last<int(1e4))
		{	
			arr[last]=i;
			return 1;
		}
		last--;
		return 0;
	}
	int top()
	{
		return arr[last];
	}
	int isEmpty()
	{
		if(arr[last]==-1)
			return 1;
		return 0;
	}
};
 
int main()
{
	stk st;
	memset(arr,-1,sizeof(arr));
	for(int i=0;i<10;i++)
	{
		int n;
		cin>>n;
		st.push(n);
	}
	st.pop();
	for(int i=0;i<11;i++)
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	return 0;
}