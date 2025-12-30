#include<iostream>
using namespace std;
int main()
{
	int marks[10],total,average;
	cout<<"Enter the marks of the 10 studnets"<<endl;
	for(int i=0;i<10;i++){
		cin>>marks[i];
	    total+=marks[i];
	}
	average=total/10;
	cout<<"\n .total="<<total<<endl;
	cout<<"\n .average="<<average<<endl;
	return 0;
}
	