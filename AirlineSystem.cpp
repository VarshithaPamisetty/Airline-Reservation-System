#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management{
	
	public:
		
		Management(){
			mainMenu();
		}
};


class Details{
	public:
		
		static string name, gender;
		int phoneNo;
		int age;
		string address;
		static int cId;
		char arr[100];
		
		void information(){
			cout<<"\n Enter the customer ID: ";
			cin>>cId;
			cout<<"\n Enter the name: ";
			cin>>name;
			cout<<"\n Enter the age: ";
			cin>>age;
			cout<<"\n Address: ";
			cin>>address;
			cout<<"\n Gender: ";
			cin>>gender;
			cout<<"Your details are saved with us! \n"<<endl;
		}
};

int Details :: cId;
string Details :: name;
string Details :: gender;

class registration{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		
		void flights(){
			string flightN[] = {"Dubai","Canada","UK","USA","Australia","Europe"};
			
			for(int a = 0; a < 6; a++){
				cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
			}
			
			cout<<"\n Welcome to International Airlines!"<<endl;
			cout<<"Press the number of the country of which you want to book the flight:";
			cin>>choice;
			
			switch(choice){
				case 1:
					{
						cout<<"__________________Welcome to Dubai Emirates__________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights: \n"<<endl;
						
						cout<<"1. DUB - 498"<<endl;
						cout<<"\t 08-01-2024 8:00AM 10hrs Rs. 24000"<<endl;
						cout<<"2. DUB - 658"<<endl;
						cout<<"\t 09-01-2024 4:00AM 12hrs Rs. 20000"<<endl;
						cout<<"3. DUB - 499"<<endl;
						cout<<"\t 11-01-2024 11:00AM 11hrs Rs. 22000"<<endl;
						
						cout<<"\n Select the flight you want to book: ";
						cin>>choice1;
						
						if(choice1 == 1){
							charges = 24000;
							cout<<"\n You have successfully booked the flight DUB - 498"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else if(choice1 == 2){
							charges = 20000;
							cout<<"\n You have successfully booked the flight DUB - 658"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else if(choice1 == 3){
							charges = 22000;
							cout<<"\n You have successfully booked the flight DUB - 499"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else{
							cout<<"Invalid input, shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back == 1){
							mainMenu();
						}
						else {
							mainMenu();
						}
					}
					
				
				case 2:
					{
						cout<<"__________________Welcome to Canadian Airlines_________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights: \n"<<endl;
						
						cout<<"1. CA - 198"<<endl;
						cout<<"\t 09-01-2024 2:00PM 20hrs Rs. 34000"<<endl;
						cout<<"2. CA - 158"<<endl;
						cout<<"\t 11-01-2024 6:00AM 23hrs Rs. 29000"<<endl;
						cout<<"3. CA - 208"<<endl;
						cout<<"\t 14-01-2024 12:00AM 21hrs Rs. 40000"<<endl;
						
						cout<<"\n Select the flight you want to book: ";
						cin>>choice1;
						
						if(choice1 == 1){
							charges = 34000;
							cout<<"\n You have successfully booked the flight CA - 198"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else if(choice1 == 2){
							charges = 29000;
							cout<<"\n You have successfully booked the flight CA - 158"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else if(choice1 == 3){
							charges = 40000;
							cout<<"\n You have successfully booked the flight CA - 208"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else{
							cout<<"Invalid input, shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back == 1){
							mainMenu();
						}
						else {
							mainMenu();
						}
					}
					
				
				case 3:
					{
						cout<<"__________________Welcome to UK Airlines_________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights: \n"<<endl;
						
						cout<<"1. UK - 178"<<endl;
						cout<<"\t 19-01-2024 12:00PM 23hrs Rs. 84000"<<endl;
						cout<<"2. UK - 897"<<endl;
						cout<<"\t 17-01-2024 8:00AM 25hrs Rs. 89000"<<endl;
						cout<<"3. UK - 345"<<endl;
						cout<<"\t 25-01-2024 10:00AM 22hrs Rs. 92000"<<endl;
						
						cout<<"\n Select the flight you want to book: ";
						cin>>choice1;
						
						if(choice1 == 1){
							charges = 84000;
							cout<<"\n You have successfully booked the flight UK - 178"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else if(choice1 == 2){
							charges = 89000;
							cout<<"\n You have successfully booked the flight UK - 897"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else if(choice1 == 3){
							charges = 92000;
							cout<<"\n You have successfully booked the flight UK - 345"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else{
							cout<<"Invalid input, shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back == 1){
							mainMenu();
						}
						else {
							mainMenu();
						}
					}
					
				
				case 4:
					{
						cout<<"__________________Welcome to US Airlines_________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights: \n"<<endl;
						
						cout<<"1. US - 178"<<endl;
						cout<<"\t 19-01-2024 12:00PM 23hrs Rs. 84000"<<endl;
						cout<<"2. US - 897"<<endl;
						cout<<"\t 17-01-2024 8:00AM 25hrs Rs. 89000"<<endl;
						cout<<"3. US - 345"<<endl;
						cout<<"\t 25-01-2024 10:00AM 22hrs Rs. 92000"<<endl;
						
						cout<<"\n Select the flight you want to book: ";
						cin>>choice1;
						
						if(choice1 == 1){
							charges = 84000;
							cout<<"\n You have successfully booked the flight US - 178"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else if(choice1 == 2){
							charges = 89000;
							cout<<"\n You have successfully booked the flight US - 897"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else if(choice1 == 3){
							charges = 92000;
							cout<<"\n You have successfully booked the flight US - 345"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else{
							cout<<"Invalid input, shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back == 1){
							mainMenu();
						}
						else {
							mainMenu();
						}
					}
					
					
				case 5:
					{
						cout<<"__________________Welcome to Australian Airlines_________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights: \n"<<endl;
						
						cout<<"1. AU - 178"<<endl;
						cout<<"\t 19-01-2024 12:00PM 23hrs Rs. 84000"<<endl;
						cout<<"2. AU - 897"<<endl;
						cout<<"\t 17-01-2024 8:00AM 25hrs Rs. 89000"<<endl;
						cout<<"3. AU - 345"<<endl;
						cout<<"\t 25-01-2024 10:00AM 22hrs Rs. 92000"<<endl;
						
						cout<<"\n Select the flight you want to book: ";
						cin>>choice1;
						
						if(choice1 == 1){
							charges = 84000;
							cout<<"\n You have successfully booked the flight AU - 178"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else if(choice1 == 2){
							charges = 89000;
							cout<<"\n You have successfully booked the flight AU - 897"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else if(choice1 == 3){
							charges = 92000;
							cout<<"\n You have successfully booked the flight AU - 345"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else{
							cout<<"Invalid input, shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back == 1){
							mainMenu();
						}
						else {
							mainMenu();
						}
					}
					
				
				case 6:
					{
						cout<<"__________________Welcome to European Airlines_________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights: \n"<<endl;
						
						cout<<"1. EU - 178"<<endl;
						cout<<"\t 19-01-2024 12:00PM 23hrs Rs. 84000"<<endl;
						cout<<"2. EU - 897"<<endl;
						cout<<"\t 17-01-2024 8:00AM 25hrs Rs. 89000"<<endl;
						cout<<"3. EU - 345"<<endl;
						cout<<"\t 25-01-2024 10:00AM 22hrs Rs. 92000"<<endl;
						
						cout<<"\n Select the flight you want to book: ";
						cin>>choice1;
						
						if(choice1 == 1){
							charges = 84000;
							cout<<"\n You have successfully booked the flight EU - 178"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else if(choice1 == 2){
							charges = 89000;
							cout<<"\n You have successfully booked the flight EU - 897"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else if(choice1 == 3){
							charges = 92000;
							cout<<"\n You have successfully booked the flight EU - 345"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else{
							cout<<"Invalid input, shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back == 1){
							mainMenu();
						}
						else {
							mainMenu();
						}
					}
					
					
					default:
						{
							cout<<"Invalid inout, Shifting to the main menu! "<<endl;
							mainMenu();
							break;
						}
				
			}
		}
};


float registration :: charges;
int registration :: choice;

class ticket : public registration, Details{
	public:
		
		void Bill(){
			string destination = " ";
			ofstream outf("records.txt");
			{
				outf<<"_______________International Airlines______________"<<endl;
				outf<<"_______________________Ticket_______________________"<<endl;
				outf<<"____________________________________________________"<<endl;
				
				outf<<"Customer ID: "<<Details :: cId<<endl;
				outf<<"Customer Name: "<<Details :: name<<endl;
				outf<<"Customer Gender: "<<Details :: gender<<endl;
				
				outf<<"\t DEscription"<<endl<<endl;
				
				if(registration :: choice == 1){
					destination = "Dubai";
				}
				else if (registration :: choice == 2){
					destination = "Canada";
				}
				else if (registration :: choice ==3){
					destination = "UK";
				}
				else if (registration :: choice == 4){
					destination = "USA";
				}
				else if(registration :: choice ==5){
					destination = "Australia";
				}
				else if(registration :: choice == 6){
					destination = "Europe";
				}
				
				outf<<"Destination\t\t"<<destination<<endl;
				outf<<"Flight cost :\t\t"<<registration :: charges<<endl;
			}
			outf.close();
			}
			
			void dispBill(){
				ifstream ifs("records.txt");
				{
					if(!ifs){
						cout<<"File error!"<<endl;
					}
					while(!ifs.eof()){
						ifs.getline(arr, 100);
						cout<<arr<<endl;
					}
				}
				ifs.close();			
		}
};


void mainMenu(){
	int lchoice;
	int schoice;
	int back;
	
	cout<<"\t              International Airlines\n"<<endl;
	cout<<"\t______________Main Menu_______________"<<endl;
	
	cout<<"\t_______________________________________"<<endl;
	cout<<"\t\t\t\t\t\t\t"<<endl;
	
	cout<<"\t|\t Press 1 to add the Customer Details     \t|"<<endl;
	cout<<"\t|\t Press 2 for Flight Registration         \t|"<<endl;
	cout<<"\t|\t Press 3 for Ticket and Charges          \t|"<<endl;
	cout<<"\t|\t Press 4 to Exit                         \t|"<<endl;
	cout<<"\t\t\t\t\t\t\t"<<endl;
	cout<<"\t_______________________________________"<<endl;
	
	cout<<"Enter your choice: ";
	cin>>lchoice;
	
	Details d;
	registration r;
	ticket t;
	
	switch(lchoice){
		case 1:
			{
				cout<<"_____________Customers______________\n"<<endl;
				d.information();
				cout<<"Press any key to go back to Main Menu";
				cin>>back;
				
				if(back == 1){
					mainMenu();
				} else {
					mainMenu();
				}
			break;
			}
		
		case 2:
			{
				cout<<"_____________Book a flight______________\n"<<endl;
				r.flights();
				
			break;
			}
		
		case 3:
			{
				cout<<"_____________GET YOUR TICKET______________\n"<<endl;
				t.Bill();
				
				cout<<"Your ticket is printed, you can collect it \n"<<endl;
				cout<<"Press 1 to display your ticket";
				
				cin>>back;
				
				if(back == 1){
					t.dispBill();
					cout<<"Press any key to go back to main menu";
					cin>>back;
					if(back==1){
						mainMenu();
					} else {
						mainMenu();
					}
				} else {
					mainMenu();
				}
				
			break;
			}
		
		case 4:
			{
				cout<<"\n\n\n__________Thank you__________"<<endl;
			break;
			}
		
		default:
			{
				cout<<"Invalid input, Please try again! \n"<<endl;
				mainMenu();
			}
			
			
	}
	
}

int main(){
	Management Mobj;
	return 0;
}

