#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<int> pq;
	pq.push(10);
	pq.push(-5);
	pq.push(8);
	pq.push(7);
	
	cout<<"Size of priority queue: "<<pq.size()<<"\n\n";
	while(!pq.empty())
	{
		cout<<pq.top()<<"\n";
		pq.pop();
	}
	cout<<"\n\n";
	
	cout<<"Size of priority queue: "<<pq.size()<<"\n";
	return 0;
}
