#include<iostream>
using namespace std;
int main ()
{
	int pay[6];
	// without loop
	cout<<"enter the salaries of the employee= \n";
	cin>>pay[0]>>pay[1]>>pay[2]>>pay[3]>>pay[4]>>pay[5];
	cout<<"the salaries of employes are :";
	cout<<pay[0]<<"\n"<<pay[1]<<"\n"<<pay[2]<<"\n"<<pay[3]<<"\n"<<pay[4]<<"\n"<<pay[5]<<endl;
	
	//with loop
	cout<<"enter the salaries of the employes=\n";
	for(int i=0;i<6;i++){
		cin>>pay[i];
		
	}
	cout<<"the entered salaries are "<<endl;
	for(int i=0;i<6;i++){
		
	cout<<pay[i]<<endl;
}

return 0;
}
