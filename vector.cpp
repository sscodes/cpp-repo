/*
Vectors:-
1. Vectors are same as Dynamic Arrays.
2. It has an ability to resize itself.
3. Vector elements are stored in contiguous ao they can be accessed and traversed using 
   iterators.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;				/* [] */
	vector<int> :: iterator it;
	v.push_back(3);				/* [3] */
	v.push_back(10);			/* [3, 10] */
	v.push_back(7);  			/* [3, 10, 7] */
	
	for(int i=0; i<3; i++)		// 3 10 7
	cout<<v[i]<<" ";
	cout<<"\n\n";
	
	v.pop_back();				/* [3, 10], 7*/
	
	for(int i=0; i<3; i++) 		// 3 10 7
	cout<<v[i]<<" ";
	cout<<"\n\n";
	
	int size = (int)v.size();
	
	for(int i=0; i<size; i++) 	// 3 10
	cout<<v[i]<<" ";
	cout<<"\n\n";
	
	for(auto it=v.begin(); it!=v.end(); ++it)	// 3 10
	cout<<*it<<" ";
	cout<<"\n\n";
	
	auto a=v.begin();	//it provides iterator which points to the first element of the array
	cout<<"First element using auto: "<<*a<<"\n\n";
	
	it=v.begin();
	cout<<"First element using iterator: "<<*it<<"\n\n";
	
	it=v.end();			//it provides iterator which points to the last element of the array
	cout<<"Last element using iterator: "<<*it<<"\n\n";
	
	
	cout<<"First element using vector name and []: "<<v[0]<<"\n\n";
	
	
	// thus we have two ways to represent elements of a vector.
	// by using pointer(iterator) or
	// by using name of the vector and using zero based indexing
	
	v.assign(5,2);
	
	v.push_back(3);				
	v.push_back(10);	
	
	v.insert(v.begin(), 5);
	v.insert(v.begin()+3, 1);
		
	size = (int)v.size();
	for(int i=0; i<size; i++) 	// 5 2 2 1 2 2 2 3 10
	cout<<v[i]<<" ";
	cout<<"\n\n";
	
	v.erase(v.begin());
	
	size = (int)v.size();
	for(int i=0; i<size; i++) 	// 2 2 1 2 2 2 3 10
	cout<<v[i]<<" ";
	cout<<"\n\n";
	
	v.erase(v.begin()+2);
	
	size = (int)v.size();
	for(int i=0; i<size; i++) 	// 2 2 1 2 2 2 3 10
	cout<<v[i]<<" ";
	cout<<"\n\n";
	
	cout<<"Is the vector empty? "<<v.empty()<<"\n\n";
	
	
	cout<<"Maximum elements that can be stored in the vector: "<<v.max_size()<<"\n\n";
	
	
	vector<int> v1, v2;
	v1.push_back(3);				
	v2.push_back(10);			
	v1.push_back(7);
	v2.push_back(11);
	v1.push_back(5);
	
	size = (int)v1.size();
	cout<<"v1:-"<<"\n";
	for(int i=0; i<size; i++) 	
	cout<<v1[i]<<" ";
	cout<<"\n\n";
	
	size = (int)v2.size();
	cout<<"v2:-"<<"\n";
	for(int i=0; i<size; i++) 	
	cout<<v2[i]<<" ";
	cout<<"\n\n";
	
	v1.swap(v2);
	
	cout<<"After swapping:-"<<"\n\n";
	
	size = (int)v1.size();
	cout<<"v1:-"<<"\n";
	for(int i=0; i<size; i++) 	
	cout<<v1[i]<<" ";
	cout<<"\n\n";
	
	size = (int)v2.size();
	cout<<"v2:-"<<"\n";
	for(int i=0; i<size; i++) 	
	cout<<v2[i]<<" ";
	cout<<"\n\n";
	
	v.clear();
	v1.clear();
	v2.clear();
	
	size = (int)v.size();
	cout<<"v:-"<<"\n";
	for(int i=0; i<size; i++) 	
	cout<<v[i]<<" ";
	cout<<"\n\n";
	
	size = (int)v1.size();
	cout<<"v1:-"<<"\n";
	for(int i=0; i<size; i++) 	
	cout<<v1[i]<<" ";
	cout<<"\n\n";
	
	size = (int)v2.size();
	cout<<"v2:-"<<"\n";
	for(int i=0; i<size; i++) 	
	cout<<v2[i]<<" ";
	cout<<"\n\n";
	
	return 0;
}
