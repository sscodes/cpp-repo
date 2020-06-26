/*
List:-
1. Lists are sequence containers that allow non-contiguous memory location.
2. It internally uses doubly linked list.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	
	cout<<"Is the list empty? "<<l.empty()<<"\n\n";
	int s=l.size();
	cout<<"Size: "<<s<<"\n\n";
	
	for(auto i=l.begin();i!=l.end();i++)
	cout<<*i<<" ";
	cout<<"\n\n";
	
	
	cout<<"Front: "<<l.front()<<"\n\n";
	cout<<"Back: "<<l.back()<<"\n\n";
	
	l.pop_back();
	s=l.size();
	for(auto i=l.begin();i!=l.end();i++)
	cout<<*i<<" ";
	cout<<"\n\n";
	
	cout<<"Is the list empty? before .clear() "<<l.empty()<<"\n\n";
	l.clear();
	cout<<"Is the list empty? after .clear() "<<l.empty()<<"\n\n";
	
	return 0;
}
