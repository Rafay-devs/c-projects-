#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int i,j,sum=0;
  for (i=10;i<=40;i+=10){
  	for(j=1;j<=4;j++){
  		cout<<i+j<<'\t';
	  }
	  cout<<endl;
  }

	return 0;
}