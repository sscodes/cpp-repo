/*
DEQUE:-
1. In this elements are inserted and deleted from both the ends.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	deque<int> dq;
	dq.push_front(1);
	dq.push_back(2);
	dq.push_front(3);
	dq.push_back(4);
	dq.push_front(5);
	
	cout<<"Is the queue empty? "<<dq.empty()<<"\n\n";
	int s=dq.size();
	cout<<"Size: "<<s<<"\n\n";
	cout<<"Maximum element it can hold: "<<dq.max_size()<<"\n\n";
	cout<<"Element at position 3: "<<dq.at(2)<<"\n\n";
	
	for(auto i=dq.begin();i!=dq.end();i++)
	cout<<*i<<" ";
	cout<<"\n\n";
	
	
	cout<<"Front: "<<dq.front()<<"\n\n";
	cout<<"Back: "<<dq.back()<<"\n\n";
	
	dq.pop_back();
	s=dq.size();
	cout<<"Deleting from back:- \n";
	for(auto i=dq.begin();i!=dq.end();i++)
	cout<<*i<<" ";
	cout<<"\n\n";
	
	dq.pop_front();
	s=dq.size();
	cout<<"Deleting from front:- \n";
	for(auto i=dq.begin();i!=dq.end();i++)
	cout<<*i<<" ";
	cout<<"\n\n";
	
	cout<<"Is the queue empty? before .clear() "<<dq.empty()<<"\n\n";
	dq.clear();
	cout<<"Is the queue empty? after .clear() "<<dq.empty()<<"\n\n";
	
	return 0;
}
