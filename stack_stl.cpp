/*
Stack:-
1. Stack is a container.
2. It has a concept of LIFO.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	
	cout<<"Is the stack empty? "<<s.empty()<<"\n";
	cout<<"Size: "<<s.size()<<"\n\n";
	
	while(!s.empty())
	{
		cout<<s.top()<<"\n";
		s.pop();
	}
	cout<<"\n";
	
	cout<<"Is the stack empty? "<<s.empty()<<"\n";
	cout<<"Size: "<<s.size()<<"\n\n";
	
	return 0;
}
