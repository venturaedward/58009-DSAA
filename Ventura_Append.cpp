#include <iostream>
using namespace std;
int main(){
	int array [10];
	int n,x;
	cout<<"Enter the no elements: ";
	cin>>n;
	cout<<"Enter the elements:\n";
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	cout<<"Enter the new element: ";
	cin>>x;
	array[n]=x;
	n++;
	cout<<"New array:\n";
	for(int i=0;i<n;i++)
	 cout<<array[i];
	return 0;
}
