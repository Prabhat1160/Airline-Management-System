#include<iostream>
#include<fstream>

#include<set>


using namespace std;

class DuplicateCustomerException : public runtime_error {
    public:
        DuplicateCustomerException() : runtime_error("Duplicate Customer ID detected!") {}
    };
    


void mainmenu();
class management
{
    public:
    management()
    {
        mainmenu();
    }
};

class Details
{
    public:
    static string name,gender,board;
    int phoneno;
    int age;
    string add;
     static set<int> customerIDs;
    static int c_id;
    char arr[100];

    void information()
    {
            cout<<"\nEnter the Customer ID : ";
            cin>>c_id;
            if (customerIDs.find(c_id) != customerIDs.end()) {
                throw DuplicateCustomerException();
            }
            cout<<"\nEnter the name : ";
            cin>>name;
            cout<<"\nEnter the age : ";
            cin>>age;
            cout<<"\nAddress : ";
            cin>>add;
            cout<<"\n Gender (Male/Female): ";
            cin>>gender;
            cout<<"Boarding at : ";
            cin>>board;
            customerIDs.insert(c_id);
            cout<<"Your Details are saved with us \n"<<endl;
         
    }

    
};
int Details::c_id;
string Details::name;
string Details::gender;
string Details::board;
set<int> Details::customerIDs; 




class Registration 
{  
    public:
    static int choice;
    int choice1;
    int back;
    static float charges;
    void flights()
    {
        string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
        for(int i=0;i<6;i++)
        {
            cout<<(i+1)<<" . flight to "<<flightN[i]<<endl;

        }
        cout<<"\n                 WELCOME TO THE AIRLINES !"<<endl;
        cout<<"Press the number of the country of which you want to book the flight :";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"____________________Welcome to Dubai Emirates____________________\n"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey !"<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1.DUB  -  498 "<<endl;
                cout<<"\t01-03-2025  9:00 AM 10hrs Rs.15000"<<endl;
                cout<<"2.DUB  -  658 "<<endl;
                cout<<"\t03-03-2025  5:00 AM 12hrs Rs.10000"<<endl;
                cout<<"3.DUB  -  789 "<<endl;
                cout<<"\t10-03-2025  2:00 PM 11hrs Rs.8000"<<endl;
                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;
                switch(choice1)
                {
                    case 1:
                    {
                        charges=15000;
                        cout<<"\nYou have Successfully Booked the flight DUB - 498"<<endl;
                        cout<<"You can go back to menu and take the ticket "<<endl;
                        break;

                    }
                    case 2:
                    {
                        charges=10000;
                        cout<<"\nYou have Successfully Booked the flight DUB - 658"<<endl;
                        cout<<"You can go back to menu and take the ticket "<<endl;
                        break;

                    }

                    case 3:
                    {
                        charges=9000;
                        cout<<"\nYou have Successfully Booked the flight DUB - 789"<<endl;
                        cout<<"You can go back to menu and take the ticket "<<endl;
                        break;
                    }
                    default:
                    {
                        cout<<"Invalid choice, shifting to the previous menu"<<endl;
                        flights();
                        
                    }
                    cout<<"Press any key to go back to Main menu :"<<endl;
                    cin>>back;
                    if(back==1)
                    {
                        mainmenu();
                    }
                    else
                    {
                        mainmenu();
                    }
                    


                }

                    break;

            }
            case 2:
            {
                cout<<"____________________Welcome to Canadian Airlines____________________\n"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey !"<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1.CAN  -  198 "<<endl;
                cout<<"\t01-03-2025  9:00 AM 17hrs Rs.35000"<<endl;
                cout<<"2.CAN  -  256 "<<endl;
                cout<<"\t03-03-2025  5:00 AM 21hrs Rs.20000"<<endl;
                cout<<"3.CAN  - 674 "<<endl;
                cout<<"\t10-03-2025  2:00 PM 11hrs Rs.58000"<<endl;
                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;
                switch(choice1)
                {
                    case 1:
                    {
                        charges=35000;
                        cout<<"\nYou have Successfully Booked the flight CAN - 198"<<endl;
                        cout<<"You can go back to menu and take the ticket "<<endl;
                        break;

                    }
                    case 2:
                    {
                        charges=20000;
                        cout<<"\nYou have Successfully Booked the flight CAN - 256"<<endl;
                        cout<<"You can go back to menu and take the ticket "<<endl;
                        break;

                    }

                    case 3:
                    {
                        charges=58000;
                        cout<<"\nYou have Successfully Booked the flight CAN - 674"<<endl;
                        cout<<"You can go back to menu and take the ticket "<<endl;
                        break;
                    }
                    default:
                    {
                        cout<<"Invalid choice, shifting to the previous menu"<<endl;
                        flights();
                        
                    }
                   
                    


                }
                cout<<"Press any key to go back to Main menu :"<<endl;
                cin>>back;
                if(back==1)
                {
                    mainmenu();
                }
                else
                {
                    mainmenu();
                }
                break;


            }
            
            case 3:
            {
                cout<<"____________________Welcome to UK Airways____________________\n"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey !"<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1.UK  -  298 "<<endl;
                cout<<"\t06-03-2025  9:00 AM 10hrs Rs.15000"<<endl;
                cout<<"2.UK  -  958 "<<endl;
                cout<<"\t09-03-2025  5:00 AM 12hrs Rs.10000"<<endl;
                
                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;
                switch(choice1)
                {
                    case 1:
                    {
                        charges=15000;
                        cout<<"\nYou have Successfully Booked the flight UK - 198"<<endl;
                        cout<<"You can go back to menu and take the ticket "<<endl;
                        break;

                    }
                    case 2:
                    {
                        charges=10000;
                        cout<<"\nYou have Successfully Booked the flight UK - 958"<<endl;
                        cout<<"You can go back to menu and take the ticket "<<endl;
                        break;

                    }

                   
                    default:
                    {
                        cout<<"Invalid choice, shifting to the previous menu"<<endl;
                        flights();
                        
                    }
                    
                    


                }
                cout<<"Press any key to go back to Main menu :"<<endl;
                    cin>>back;
                    if(back==1)
                    {
                        mainmenu();
                    }
                    else
                    {
                        mainmenu();
                    }

                break;


            }

            case 4:
            {
                cout<<"____________________Welcome to USA Airways____________________\n"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey !"<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1.USA  -  398 "<<endl;
                cout<<"\t01-03-2025  12:00 AM 10hrs Rs.65000"<<endl;
                
                cin>>choice1;
                
                switch(choice1)
                {
                    case 1:
                    {
                        charges=65000;
                        cout<<"\nYou have Successfully Booked the flight USA - 498"<<endl;
                        cout<<"You can go back to menu and take the ticket "<<endl;
                        break;

                    }
                    
                    default:
                    {
                        cout<<"Invalid choice, shifting to the previous menu"<<endl;
                        flights();
                        
                    }
                    


                }
                cout<<"Press any key to go back to Main menu :"<<endl;
                    cin>>back;
                    if(back==1)
                    {
                        mainmenu();
                    }
                    else
                    {
                        mainmenu();
                    }
                    

                break;


            }

            case 5:
            {
                cout<<"____________________Welcome to Australia Airways____________________\n"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey !"<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1.AUS  -  998 "<<endl;
                cout<<"\t01-03-2025  9:00 AM 10hrs Rs.15000"<<endl;
                cout<<"2.AUS  -  658 "<<endl;
                cout<<"\t03-03-2025  5:00 AM 12hrs Rs.10000"<<endl;
                cout<<"3.AUS  -  789 "<<endl;
                cout<<"\t10-03-2025  2:00 PM 11hrs Rs.8000"<<endl;
                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;
                switch(choice1)
                {
                    case 1:
                    {
                        charges=15000;
                        cout<<"\nYou have Successfully Booked the flight AUS - 998"<<endl;
                        cout<<"You can go back to menu and take the ticket "<<endl;
                        break;

                    }
                    case 2:
                    {
                        charges=10000;
                        cout<<"\nYou have Successfully Booked the flight AUS - 658"<<endl;
                        cout<<"You can go back to menu and take the ticket "<<endl;
                        break;

                    }

                    case 3:
                    {
                        charges=9000;
                        cout<<"\nYou have Successfully Booked the flight AUS - 789"<<endl;
                        cout<<"You can go back to menu and take the ticket "<<endl;
                        break;
                    }
                    default:
                    {
                        cout<<"Invalid choice, shifting to the previous menu"<<endl;
                        flights();
                        
                    }
                    
                    


                }

                cout<<"Press any key to go back to Main menu :"<<endl;
                    cin>>back;
                    if(back==1)
                    {
                        mainmenu();
                    }
                    else
                    {
                        mainmenu();
                    }

                break;


            }

            case 6:
            {
                cout<<"____________________Welcome to Europe Airways____________________\n"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey !"<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1.EUR  -  498 "<<endl;
                cout<<"\t01-03-2025  9:00 AM 10hrs Rs.15000"<<endl;
                cout<<"2.EUR  -  658 "<<endl;
                cout<<"\t03-03-2025  5:00 AM 12hrs Rs.10000"<<endl;
                cout<<"3.EUR  -  789 "<<endl;
                cout<<"\t10-03-2025  2:00 PM 11hrs Rs.8000"<<endl;
                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;
                switch(choice1)
                {
                    case 1:
                    {
                        charges=15000;
                        cout<<"\nYou have Successfully Booked the flight EUR - 498"<<endl;
                        cout<<"You can go back to menu and take the ticket "<<endl;
                        break;

                    }
                    case 2:
                    {
                        charges=10000;
                        cout<<"\nYou have Successfully Booked the flight EUR - 658"<<endl;
                        cout<<"You can go back to menu and take the ticket "<<endl;
                        break;

                    }

                    case 3:
                    {
                        charges=9000;
                        cout<<"\nYou have Successfully Booked the flight EUR - 789"<<endl;
                        cout<<"You can go back to menu and take the ticket "<<endl;
                        break;
                    }
                    default:
                    {
                        cout<<"Invalid choice, shifting to the previous menu"<<endl;
                        flights();
                        
                    }
                    


                }

                cout<<"Press any key to go back to Main menu :"<<endl;
                    cin>>back;
                    if(back==1)
                    {
                        mainmenu();
                    }
                    else
                    {
                        mainmenu();
                    }
                    
                    break;




            }
            default:
            {
                cout<<"Invalid input,Shifting to the main menu !"<<endl;
                mainmenu();
                break;
            }

        }
    }
};

float Registration::charges;
int Registration::choice;

class Ticket:public Registration,Details
{
    public:
    void bill()
    {
        string destination =" ";
        ofstream outf("records.txt");
        {
            outf<<"__________________________YOYO Airlines_______________________"<<endl;
            outf<<"_____________________________Ticket__________________________"<<endl;
            outf<<"_____________________________________________________________"<<endl;
            outf<<"Customer ID : "<<Details::c_id<<endl;
            outf<<"Customer Name : "<<Details::name<<endl;
            outf<<"Customer Gender : "<<Details::gender<<endl;
            outf<<endl;
            outf<<"                 Description"<<endl<<endl;
            if(Registration::choice==1)
            {
                destination="Dubai";
            }
            else if(Registration::choice==2)
            {
                destination="Canada";
            }
            else if(Registration::choice==3)
            {
                destination="UK";
            }
            else if(Registration::choice==4)
            {
                destination="USA";
            }
            else if(Registration::choice==5)
            {
                destination="Australia";
            }
            else if(Registration::choice==6)
            {
                destination="Europe";
            }
            outf<<"Source :      \t\t"<<board<<endl;
            outf<<"Destination : \t\t"<<destination<<endl;
            outf<<"Flight Cost : \t\t"<<Registration::charges<<endl;
            outf<<"__________________________Have a Safe Journey_______________________"<<endl;







        }
        outf.close();
    }
    void displaybill()
    {
        ifstream ifs("records.txt");
        {
            if(!ifs)
            {
                cout<<"file error"<<endl;
            }
            while(!ifs.eof())
            {
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }

    
    
    

};
void mainmenu()
{
    int ichoice;
    // int schoice;
    int back;
    cout<<"\t                     YOYO AIRLINES               "<<endl;
    cout<<"\t_____________________Main Menu___________________"<<endl;
    cout<<"\t_________________________________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t\\t\t\t\t"<<endl;
    cout<<"\t|\t  Press 1 to add the Customer Details   \t|"<<endl;
    cout<<"\t|\t  Press 2 for Flight Registration    \t|"<<endl;
    cout<<"\t|\t  Press 3 for Ticket and Charges   \t|"<<endl;
     cout<<"\t\t  Press 4 to Give Feedback    "<<endl;
     cout<<"\t|\t  Press 5 to Exit                  \t|"<<endl;

     cout<<"\t|\t\t\t\t\t\t\t|"<<endl;
    cout<<"\t____________________________________________________"<<endl;
    cout<<"Enter the choice : ";
    cin>>ichoice;
    Details d;
    Registration r;
    Ticket t;
    switch(ichoice)
    {
        case 1:
        {
            cout<<"______________Customers_______________\n"<<endl;
           
            try {  d.information();
            
            } catch (const DuplicateCustomerException& e) {
                cout << e.what() << endl;
            }
            cout<<"Press any key  to go  back to Main Menu ";
            cin>>back;
            if(back==1)
            {
                mainmenu();
            }
            else
            {
                mainmenu();
            }
            break;



        }

        case 2:
        {
            cout<<"__________________Book a Flight using this system___________________\n"<<endl;
            r.flights();
            break;
        }
        case 3:
        {
            cout<<"____________GET YOUR TICKET____________\n"<<endl;
            t.bill();
            cout<<"Your Ticket is printed, you can collect it \n"<<endl;
            cout<<"Press 1 to display your ticket ";
            cin>>back;
            
            if(back==1)
            {
                t.displaybill();
                cout<<"Press any key to go back to main menu";
                cin>>back;
                if(back==1)
                {
                    mainmenu();

                }
                else{
                    mainmenu();
                }
            }
            else
            {
                mainmenu();

            }
            break;

            
        }

        
        case 4:
        {

            string feedback;
            cout << "Please provide your feedback about the booking experience: ";
            cin.ignore(); 
            getline(cin, feedback);  
            ofstream feedbackFile("feedback.txt", ios::app); 
            if (feedbackFile.is_open()) {
                feedbackFile << "Feedback: " << feedback << endl;
                feedbackFile.close();
                cout << "Thank you for your feedback!" << endl;
            } else {
                cout << "Error saving feedback." << endl;
            }
            break;
                
                
        }


       
        case 5:
        {
            cout<<"\n\n\t______________Thank You__________________"<<endl;
            break;
        }

       


        default:
        {
            cout<<"Invalid input,Please try again !\n"<<endl;
            mainmenu();
            break;
        }
    }




}





int main()
{
    management mob;
    return 0;
}