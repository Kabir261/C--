#include<iostream>
using namespace std;

int main()
{
	int row, col, i, j;

	cout<<"Enter no. of rows";
	cin>>row;
	cout<<"Enter no. of columns";
	cin>>col;



	// For Full Rectangle

	for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"\n";

	// For Hollow Rectangle

    for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
			
			if (i==1 || i==row || j==1 || j==col)
			{
				cout<<"*";
			}
			else{
				cout<<" ";
			}
				 
			
		}
		cout<<endl;
	}

	
}

