#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

struct Cars 
{
    string mark [10]  = {"Hyundai","Xcent","Tata Tiago","M. Ciaz","M. Dzire","HondaAmaze","Creta","Toyota","Ford"};
    string model [10] = {"2016MD","2018AS","2018DS","2017LA","2018OW","2005Ps","2008PW","2010QW","2016SA"};
    string maxs_peed [10] = {"100 Km/h ","150 Km/h","150 Km/h","170 Km/h","130 Km/h","140 Km/h","130 Km/h","120 Km/h","150 Km/h"};
    int price [ 10 ] = {1000,2000,3000,5000,2000,3000,4000,6000,7000} ;
}car;

void login();
void registration();
void home();
void getcar();
void rentcar();

int main()
{
    int choice;
    cout<<"\n\n\n\t\t\t\t\t\t\t\t\t-------------------------------------------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t\t\t                       WELCOME TO CAR RENTAL SYSTEM         \n";
    cout<<"\t\t\t\t\t\t\t\t\t-------------------------------------------------------------------------\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t ------------------------------ \n";
    cout<<"\t\t\t\t\t\t\t\t\t|             Menu             |\n";
    cout<<"\t\t\t\t\t\t\t\t\t ------------------------------\n";
    cout<<"\t\t\t\t\t\t\t\t\t| Press 1 to LOGIN             |"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t| Press 2 to REGISTER          |"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t| Press 3 to EXIT              |"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t ------------------------------\n";
    cout<<"\n\t\t\t\t\t\t\t\t\tPlease Enter your Choice: ";
    cin>>choice;
    cout<<endl;
    switch(choice)
    {
        case 1:
        login();
        break;

        case 2:
        registration();
        break;

        case 3:
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t     Thank you :)";
        cout<<"\n\t\t\t\t\t\t------------------------------------------------------------------------------------------------------------------------";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t ** The program has been terminated **";
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
        exit; 
		break;           

        default:
        system("cls");
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\tPlease select from the options given above..!!\n"<<endl;
        main();
    }

}
void login()
{
    int count;
    string userId, password, id, pass;
    system("cls");
    
    cout<<"\n\n\n\t\t\t\t\t\t\t\t\t-------------------------------------------------------------------------\n\n";
    cout<<"\t\t\t\t\t\t\t\t\tPlease Enter the User Name and the Password : "<<endl;
    cout<<"\n\t\t\t\t\t\t\t\t\t-------------------------------------------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t\t\tUser Name: ";
    cin>>userId;
    cout<<"\t\t\t\t\t\t\t\t\t-----------------------------\n";
    cout<<"\t\t\t\t\t\t\t\t\tPassword : ";
    cin>>password;
    cout<<"\n";

    ifstream input("records.txt");
    while(input>>id>>pass)
    {
        if(id==userId  &&  pass==password)
        {
            count=1;
            system("cls");
        }
    }
    input.close();

    if(count==1)
    {
    	system("cls");
    	cout<<"\n\n\t\t\t\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
        cout<<"\n\t\t\t\t\t\t\t\t                      ******* LOGIN is successfull *******\n";
        cout<<"\t\t\t\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
        home();
    }
    else
    {
    	cout<<"\n\n\t\t\t\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t***** User Name not found. Plear check your username and password *****";
		cout<<"\n\t\t\t\t\t\t\t\t\t         ---------------------------------------------------------\n"; 
		cout<<"\n\n";  
		main();     
    }
}

void registration()
{
    string ruserId, rpassword,rid,rpass;
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t\t\t\t\t                  ....Register yourself Here....";
    cout<<"\n\t\t\t\t\t\t\t\t\t------------------------------------------------------------------\n";
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter UserName: ";
    cin>>ruserId;
    cout<<"\t\t\t\t\t\t\t\t\t-----------------------------\n";
    cout<<"\t\t\t\t\t\t\t\t\tEnter the password : ";
    cin>>rpassword;
    cout<<"\t\t\t\t\t\t\t\t\t-----------------------------\n";

    ofstream f1("records.txt",ios::app);
    f1<<ruserId<<' '<<rpassword<<endl;
    system("cls");
    
    cout<<"\n\n\n\t\t\t\t\t\t\t\t\t--------------------------------------------------------------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t\t\t                            Your Registration is successfull..!!                                ";
    cout<<"\n\t\t\t\t\t\t\t\t\t--------------------------------------------------------------------------------------------\n";
    main();
}

void home()
{
    	cout<<"\n\n\n\t\t\t\t\t\t\t    --------------------------------------------------------------------------------------------\n";
    	cout<<"\t\t\t\t\t\t\t\t                        *** WELCOME TO THE CAR RENTAL SYSTEM ***                                        ";
    	cout<<"\n\t\t\t\t\t\t\t    --------------------------------------------------------------------------------------------\n";
    	cout<<"\n\n\n\t\t\t\t\t\t\t\t\t       __________________________\n";
    	cout<<"\t\t\t\t\t\t\t\t\t      |  1. Need a car           |\n";
    	cout<<"\t\t\t\t\t\t\t\t\t      |  2. Give car on rent     |\n";
   	 	cout<<"\t\t\t\t\t\t\t\t\t      |  3. Return to login page |\n";
    	cout<<"\t\t\t\t\t\t\t\t\t      |  4. EXIT                 |\n";
    	cout<<"\t\t\t\t\t\t\t\t\t       -------------------------- \n";
    	cout<<"\n\n";
    	cout<<"\t\t\t\t\t\t\t\t----------------------------------------------------------\n";
    	int choice;
    	cout<<"\t\t\t\t\t\t\t\t How can we help you: ";
    	cin>>choice;
    	switch(choice)
    	{
    		case 1:
    			getcar();
    			break;
    		case 2:
    			rentcar();
    			break;
    		case 3:
    			main();
    			break;
    		case 4:
    			system("cls");
        		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t     Thank you :)";
        		cout<<"\n\t\t\t\t\t\t------------------------------------------------------------------------------------------------------------------------";
        		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t ** The program has been terminated **";
        		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
        		exit; 
    			break;    			
		}
}

void getcar()
 { 	
    system("cls");
 	cout<<"\n\n\t\t\t\t\t\t\t\t\t\t_______________________________________________\n";
 	cout<<"\t\t\t\t\t\t\t\t\t\t The list of available cars is given below -->\n";
 	cout<<"\n\t\t\t\t\t\t----------------------------------------------------------------------------------------------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t_________________________________________________________________________________________________\n";
 	cout<<"\t\t\t\t\t\t\t|\tS.No\t  |\tBrand\t  |\tModel\t  |\tCharge per day\t  |\tmax_speed\t|\n";
 	cout<<"\t\t\t\t\t\t\t-------------------------------------------------------------------------------------------------\n";
 	int num=1;
 	for(int i=0 ;i<9;++i)
 	{
 		cout<<"\t\t\t\t\t\t\t";
    	cout<<"|\t"<<num<<".  \t  |  "<<car.mark[i]<<"\t  |    "<<car.model[i]<<"     |\t    "<<car.price[i]<<"\t  |\t  "<<car.maxs_peed[i]<<"\t|"<<endl;
    	num++ ; 
 	}
 	cout<<"\t\t\t\t\t\t\t-------------------------------------------------------------------------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t-------------------------------------------------------------------------------------------------\n";
 	cout<<"\t\t\t\t\t\t\t|  Press 10:  Goto login page                                                                   |\n";
 	cout<<"\t\t\t\t\t\t\t|  Press 11:  TO Exit                                                                           |\n";
 	cout<<"\t\t\t\t\t\t\t-------------------------------------------------------------------------------------------------\n\n";
 	
 	int choice;
 	cout<<"\t\t\t\t\t\t\t Select from the List: ";
 	cin>>choice;
 	if (choice<=9)
 	{
 		system("cls");
		cout<<"\n\n\n\t\t\t\t\t\t\t\t\t--------------------------------------------------";
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\tYou have selected ---->";
		cout<<"\n\t\t\t\t\t\t\t\t\t--------------------------------------------------";
 		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t";
 		cout<<"Brand            :       "<<car.mark[choice-1];
 		cout<<"\n\t\t\t\t\t\t\t\t\t\t";
 		cout<<"Model            :       "<<car.model[choice-1];
 		cout<<"\n\t\t\t\t\t\t\t\t\t\t";
 		cout<<"Price per day    :       "<<car.price[choice-1];
 		cout<<"\n\t\t\t\t\t\t\t\t\t\t";
 		cout<<"Max_speed        :       "<<car.maxs_peed[choice-1];
 		cout<<"\n\n\t\t\t\t\t\t\t\t\t--------------------------------------------------";	
    	cout<<"\n\n\t\t\t\t\t\t\t\t\t ** Enter your contact details ** ";
    	cout<<"\n\n\t\t\t\t\t\t\t\t\t--------------------------------------------------\n";
    	string name;
    	cout<<"\t\t\t\t\t\t\t\t\t Name       :  ";
    	cin>>name;
    	
    	long long n;
    	cout<<"\t\t\t\t\t\t\t\t\t Mobile No. :  ";
    	cin>>n;
    	ofstream set("Bookings.txt",ios::app);
    	set<<choice<<' '<<name<<' '<<n<<endl;
    	cout<<"\n\n\n\t\t\t\t\t\t\t====================================================================================\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t    ***  BOOKING CONFIRMED  ***";
		cout<<"\n\t\t\t\t\t\t\t====================================================================================\n";
		main();
	}	
	else if(choice==10)
	{
		main();
	}
	else
	{
		system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t     Thank you :)";
        cout<<"\n\t\t\t\t\t\t------------------------------------------------------------------------------------------------------------------------";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t ** The program has been terminated **";
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
    	exit; 
	}
}

void rentcar()
{
	system("cls");
	cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t-----------------------------------------------\n";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t ==>  Please provide the following details: ";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t-----------------------------------------------\n";
	string name;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Your Name  :  ";	
	cin>>name;
	long long n;
	cout<<"\t\t\t\t\t\t\t\t\t\t Mobile No. :  ";
	cin>>n;
	
	string brand;
	cout<<"\t\t\t\t\t\t\t\t\t\t Car Brand  :  ";
	cin>>brand;
	
	string model;
	cout<<"\t\t\t\t\t\t\t\t\t\t Model      :  ";
	cin>>model;
	
	int p;
	cout<<"\t\t\t\t\t\t\t\t\t\t MinPrice Expected :  ";
	cin>>p;
	
	ofstream f1("lesseeRecord.txt",ios::app);
    f1<<name<<"  "<<n<<"  "<<brand<<"  "<<model<<"  "<<p<<endl;
    system("cls");
	
	cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t       ---------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t";
 	cout<<"          Name            :       "<<name;
 	cout<<"\n\t\t\t\t\t\t\t\t\t\t";
 	cout<<"          mobile No.      :       "<<n;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t";
 	cout<<"          Brand           :       "<<brand;
 	cout<<"\n\t\t\t\t\t\t\t\t\t\t";
 	cout<<"          Model           :       "<<model;
 	cout<<"\n\t\t\t\t\t\t\t\t\t\t";
 	cout<<"          Price per day   :       "<<p;
 	cout<<"\n\t\t\t\t\t\t\t\t\t\t       ---------------------------------------";	
	cout<<"\n\n\t\t\t\t\t\t\t   --------------------------------------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t    ** You are all Set to give your car on rent !!\n\t\t\t\t\t\t\t\t\t\t\tWe will inform you on constomer's request **";
	cout<<"\n\t\t\t\t\t\t\t--------------------------------------------------------------------------------------------------\n\n";
	cout<<"\n\n\n";
	home();	
}

