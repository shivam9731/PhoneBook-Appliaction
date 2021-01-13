#include <iostream>
#include <windows.h>
using namespace std;
int start();
int menu();
int k=0;

int main()
{
	start();
	menu();
	string name[100], num[100];
	int check=0;
	check = menu();
	do{
		// To add new contact
		if(check==1)
		{
			cout<<"\t\t\t\tName : ";
			cin>>name[k];
			cout<<"\t\t\t\tPhone no. : ";
			cin>>num[k];
			cout<<"\t\t\t\tName and number added sucessfully.";
			k++;
		}
		// To display the data
		else if(check==2)
		{
			for(int i=0; i<100; i++)
			{
				if(name[i]!="\0")
				{
					cout<<"\t\t\t\t Name : "<<name[i]<<"         Phone no. : "<<num[i]<<endl;
				}
			}
		}
		// Search by number
		else if(check==3)
		{
			string temp;
			int check2=0;
			cout<<"\t\t\t\tEnter number to search : ";
			cin>>temp;
			for(int i=0; i<100; i++)
			{
				if(temp==num[i])
				{
					cout<<"\t\t\t\tNumber is found\n";
					cout<<endl;
					cout<<"\t\t\t\tName : "<<name[i]<<"      Number : "<<num[i]<<endl;
					check2;
				}
			}
			if(check2==0)
			{
				cout<<"\t\t\t\tNumber not found";
			}
		}
		// search by name
		else if(check==4)
		{
			string temp;
			int check2=0;
			cout<<"\t\t\t\tEnter name to search : ";
			cin>>temp;
			for(int i=0; i<100; i++)
			{
				if(temp==name[i])
				{
					cout<<"\t\t\t\tName is found\n";
					cout<<"\t\t\t\tName : "<<name[i]<<"      Number : "<<num[i]<<endl;
					check2++;
				}
			}
			if(check2==0)
			{
				cout<<"\t\t\t\tName not found";
			}
		}
		// update
		else if (check==5)
		{
			string temp,temp2,temp3;
	        int check2=0;		
			cout<<"\t\t\t\tEnter name to update : ";
			cin>>temp;
			for(int i=0; i<100; i++)
			{
				if(temp==name[i])
				{
					cout<<"\t\t\t\tEnter new name : ";
					cin>>temp2;
					cout<<"\t\t\t\tEnter new number : ";
					cin>>temp3;
					name[i]=temp2;
					num[i]=temp3;
					cout<<"\t\t\t\tName and number updated sucessfully.";
					check2++;
				}
			}
			if(check2==0)
			{
				cout<<"\t\t\t\tName not found";
			}
		}
		// delete
		else if (check == 6)
		{
			string temp;
			int check2=0;
			cout<<"\t\t\t\tEnter name to delete : ";
			cin>>temp;
			for(int i=0; i<100; i++)
			{
				if(temp==name[i])
				{
					cout<<"\t\t\t\t Deleted Sucessfully\n";
					cout<<"\t\t\t\tName : "<<name[i]<<"      Number : "<<num[i]<<endl;
					name[i]="\0";
					num[i]="\0";
					check2++;
				}
			}
			if(check2==0)
			{
				cout<<"\t\t\t\tName not found";
			}
		}
		// exit 
		else if(check == 7)
		{
			break;
		}
		check = menu();
		
	}while(check!=7); 
}

int menu()
{
	cout<<"\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t\t\t|------------------------------------|"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|------------------------------------|"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|        Phone Book Appliaction      |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|------------------------------------|"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|------------------------------------|"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|                                    |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|                                    |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|       [1] Add Contact              |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|       [2] Display all contact      |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|       [3] Search by number         |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|       [4] Search by name           |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|       [5] Update                   |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|       [6] Delete                   |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|                                    |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|                                    |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|------------------------------------|"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|        [7] Exit                    |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|------------------------------------|"<<endl;
	
	int a;
	cin>>a;
	system("cls");
	return a;
}

int start()
{
	system("color 0B");
	cout<<"\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t--------------------------"<<endl;
	cout<<"\t\t\t\t\t\t--------------------------"<<endl;
	cout<<"\t\t\t\t\t\t   PhoneBook Application  "<<endl;
	cout<<"\t\t\t\t\t\t--------------------------"<<endl;
	cout<<"\t\t\t\t\t Loading";
	char  x = 219;
	for(int i=0; i<35; i++)
	{
		cout<<x;
		if(i<10)
		Sleep(300);
		if(i>=10 && i<20)
		Sleep(150);
		if(i>=10)
		Sleep(25);
	}
	system("cls");
}
