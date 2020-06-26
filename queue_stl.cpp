/*
Queue:-
1. Queue is a container.
2. It has a concept of FIFO.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	
	cout<<"Is the queue empty? "<<q.empty()<<"\n";
	cout<<"Size: "<<q.size()<<"\n";
	
	cout<<"Front: "<<q.front()<<"\n";
	cout<<"Back: "<<q.back()<<"\n\n";
	
	while(!q.empty())
	{
		cout<<q.back()<<"\n";
		q.pop();
	}
	cout<<"\n";
	
	cout<<"Is the queue empty? "<<q.empty()<<"\n";
	cout<<"Size: "<<q.size()<<"\n\n";
	
	return 0;
}
