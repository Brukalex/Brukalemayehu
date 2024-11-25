#include <iostream>
using namespace std;

void option(){
	cout<<"*********** Wellcome to Commercial Bank Of Ethiopia\n ***********\n";
	cout<<"1\t"<<"Check balance\n"<<"\v";
	cout<<"2\t"<<" Deposit\n"<<"\v";
	cout<<"3\t"<<"Withdraw\n"<<"\v";
	cout<<"4\t"<<" exit"<<endl;
	//system("cls");
}
int choice;
int main(){

	//int choice;
	double balance=500;
	double deposit;
	double withdraw;
	system("cls");
	option();
	
	
	do{cout<<"click one option \t";
	cin>>choice;
	system("cls");
	option();
	switch(choice){
		case 1:
		cout<<"Your balance is: $"<< balance<<endl;
		break;
		case 2:
		cout<<"enter your deposit balance\t";
		cin>>deposit;
		balance = balance +deposit;
		break;
		case 3:
		cout<<"enter your withdraw balance\t";
		cin>>withdraw;
		if(withdraw>balance){
			cout<<("your balance is insuficient\n");
		}else if (withdraw <=balance){
		balance =balance-withdraw;
		}
		
		break;
		default:
		cout<<"please enter correct choice\n";
	}
	
	
}
while(choice !=4);

	
	return 0;
}
	
	


