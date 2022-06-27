#include <iostream>
#include<stack>
using namespace std;

void insAtBottom(stack<int>& st,int topelement)
{
	if(st.empty())
	{
		st.push(topelement);
		return;
	}

	int element = st.top();
	st.pop();
	insAtBottom(st,topelement);
	st.push(element);
}

void reverse(stack<int>& st)
{
	if(st.empty())
		return;

	int topelement = st.top();
	st.pop();

	reverse(st);

	insAtBottom(st,topelement);
}

int main() 
{
    stack<int> st;

	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	st.push(6);

	reverse(st);
	while (!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	
	return 0;
}