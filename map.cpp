/*
Maps:-
1. Each element is stored in a key-value format.
2. No 2 values can have same key.
3. It's Python's equivalent of Dictionaries. 
4. In array, we could access the elements of the array by 0-based indexing, but in map we use 
   keys to index.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	// creating a map named person
	map <int, int> person;
	
	// Inserting the values in map
	person.insert(pair<int , int>(1,35));
	person.insert({2,40});
	person.insert({3,50});
	person.insert({5,10});
	person.insert({6,70});
	person.insert({7,100});
	
	// print
	for(auto itr=person.begin(); itr!=person.end(); ++itr)
	{
		cout<<itr->first <<" : " <<itr->second<<"\n";
	}
	cout<<"\n";
	
	// .begin returns iterator pointing to the first position in map
	auto var1 = person.begin();
	cout<<"First key:value pair: "<<var1->first<<" : "<<var1->second<<"\n"<<"\n";
	
	// .end returns iterator pointing to the garbage value after last position
	auto var2 = person.end();
	cout<<var2->first<<" : "<<var2->second<<"\n"<<"\n";
	
	// .size returns the total no. of elements in the map
	cout<<person.size()<<"\n"<<"\n";
	
	// .max_size() returns the capacity of the map, that is, the maximum element it can store
	cout<<person.max_size()<<"\n"<<"\n";	
	
	// .erase() deletes a element of  map by its position or by its key value.
	// by position
	auto itr = person.find(3); // .find() finds the address of a particular pair by its key
	person.erase(itr);
	// by key value
	person.erase(5);
	
	// printing to show work of .erase() function
	for(auto itr=person.begin(); itr!=person.end(); ++itr)
	{
		cout<<itr->first <<" : " <<itr->second<<"\n";
	}
	cout<<"\n";
	
	// .empty() returns 0 if the map is not empty, else 1
	cout<<"Is the map empty? "<<person.empty()<<"\n"<<"\n";
	
	// .clear() clears the map of its key-value pairs
	person.clear();
	cout<<"Is the map empty? "<<person.empty()<<"\n"<<"\n"; //to check work of .clear()
	
	
	return 0;
}
