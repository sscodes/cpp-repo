/*
#include "stdafx.h"
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
*/
#include<bits/stdc++.h>
using namespace std;

void setDemo()
{
	set<int> S;
	S.insert(10);
	S.insert(20);
	S.insert(1);
	S.insert(5);
	
	for(int x:S)
		cout << x << " ";
	cout << endl;
	//1,5,10,20
	
	auto it =S.find(5);
	if(it == S.end())
	{
		cout << "not present\n";
	}
	else
	{
		cout << "present\n";
		cout << *it << endl;
	}
	
	auto it2 = S.lower_bound(5);
	auto it3 = S.upper_bound(3);
	cout << *it2 << " " << *it3 << endl;
	
	auto it4 = S.upper_bound(20);
	if(it4 == S.end())
	{
		cout << "oops! sorry can't find something like that.\n";
	}
	
	S.erase(10);
}

int main()
{
	scalarDemo();
	return 0;
}
