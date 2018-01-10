//Marcus Lindsay
//Date:July 18th,2017 | 7:05PM
//Program Concept: Technical Support Scheduling for IMC Technologies LLC

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	
	
			int login = 1234;
			int password = 4321; 
			int option;
		    int SignIn_choice = 1,
				 SignUp_choice = 2,
				 Termin_choice = 3;
			unsigned seed = time(0);
			int Membernumber = 6666;
			
			
			do{
				cout << "\n \t\t\t\t Hello, thank you for using IMC Technologies! Software solutions made efficent! \n\n" << endl; 
				cout << "   \t\t\t\t\t Please choose one of the options below before proceeding... \n" << endl;  //Sends user into company portal.
				cout << " [IMC Technologies Menu Portal]" <<endl;
				cout << " \t 1. Sign in " << endl;										//User sign in options for users and subscirbers. 
				cout << " \t 2. Sign up " << endl; 
				cout << " \t 3. Terminate " << endl;
				cout << endl;
				cout << "Which option would to perfer? " << endl; 				//Request of which option the user choices. 
				cin >> option;
				
				while (option < SignIn_choice || option > Termin_choice){
					cout << "Failure. Try being more accurate this time, the IMC Technology portal isn't going anywhere.. \n" << endl; 
					cout << "Username: " << endl;
			 		cin >> login; 
			 		cout << "Password: " << endl;
			 		cin >> password;
			 		
			 			if (login != 1234 && password != 4321){
			 				cout << "Terminating session due to excessive failed login attempts \n" << endl;
							cout << "Thank you for using IMC Technologies L.L.C." << endl;
						 }
				   			 }
				if (option == 1){
					cout << "Enter your memeber login credentials to proceed into IMC Technology Environment \n" << endl; //User Validation
				   	cout << "Username:  " << endl;
			    	cin >> login; 
					cout << "Password" << endl;
					cin >> password;
					
						if(login == 1234 && password == 4321){
						
							int desired;

							cout << "\t\t\t\t\t Success! " << "Thank you for you credentials, " << "Accessing database... \n" << endl; 
							cout << "Welcome to IMC Technologies portal option \n" << endl; 
					
							cout << "   IMC Technologies Portal **************************** " << " Date: " << endl;
							cout << "  Enter your desired option from the drop down menu \n" << endl; 
							cout << "  1. Schedule an appointment " << endl;
							cout << "  2. Check Upcoming appointments " << endl;
							cout << "  3. Subscriptions / Pricing Information " << endl;
							cout << "  4. Discussion Board  " << endl;
							cout << "  5. About the company and Co Founder \n" << endl;  
							cout << endl; 
							cout << "Enter your desired destination " << endl;
							cin >> desired; 
								   if (desired == 5){
								   	cout << "\t\t\t\t\t\ Co Founder: Marcus Lindsay " << endl;
								   	
								   }	
							
					     } 
				}
				//Extra loop code 	
										
			} while (option != Termin_choice);
			//The above if statement gives the option request for entering into the company portal. Operations of services are located here. 
			
	
	
	return (0);
	
} 
