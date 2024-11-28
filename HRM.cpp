/**
    MASHAAL DEV 28'
    ALL RIGHT RESERVED @MASHAAL
	RESTAURANT MANAGEMENT PROJECT 2024

    notes:
	5. Add a lot of comments
	6. Add a script so as to not go off track during the presentation
*/

 #include <iostream> // input output stream
 #include <string>   // string usage
 #include <iomanip>  // example this
 #include <conio.h>  // console
 #include <cstdlib>  // for system commands prompt
 #include <fstream>  // for file handling
 #include <limits>   // for limits in cin looping



 //RESTAURANT
void rest();
void cafe(int*);
void appetizers(int*);
void maincourse(int*);
void beverages(int*);
void desserts(int*);
void bill_rest(int*);
//HOTEL
void hotel();
void showcase(int*,int*);
void roomchoice(int*,int *);
void checkout(int *,int *);

using namespace std;

string Types[] = {"Single", "Double", "Suite", "Penthouse", "Presidential"};
string name;


int main(){
b:
        system("cls");

	cout<<"\n\t\t*** Welcome to M&M hotel and restaurant. ***\n";

	char ch;
do{

	cout<<"\n\n\t\t Your good name: "; getline(cin, name);
	cout<<"\n\n\t\t Welcome "<<name<<" to our restaurant. \n\n\n";




	int choice = 0;

do{
	cout<<"Which service are you looking forward to; \n\t1. HOTEL \n\t2. RESTAURANT \n\nYOUR CHOICE: ";
	cin>>choice;

	if(choice==1){//hotel function call
	    hotel();
	}
	else if(choice==2){
		rest();
	}
	else{
	cout<<"\t Invalid Input Try Again. \n\n\n";
	choice=0;
	}
}while(choice==0);

cout<<"\n\n\n\tNEXT CUSTOMER = Y \n\tEND = N \n\tAnswer:\t";
cin>>ch;
if(ch=='y'||ch=='Y')
goto b;

}while(ch=='y' || ch=='Y');
if(ch=='n'||ch=='N'){

    cout<<"\n\n\t\t Ending CODE \n\n\n";
    }
else{
    cout<<"\n\n\t\t Wrong Input Press Enter to continue\n\n\n";
    getch();
    goto b;
}

return 0;
}

//RESTAURANT (MASHAAL)

void rest(){	//FUNCTION FOR RESTAURANT MANAGEMENT

	//Welcome note		idea: if time is available then give a perfect seat number, asking about the number of members
	cout<<"\n\t Welcome to the restaurant.";

    char seating;
    int total;
	int i=0;
	//seating arrangement request
	do{
        cout<<"\n\t Family = F or Individuals = I \n\nAnswer:\t";
        cin>>seating;
		if(seating == 'f' || seating == 'F'){
        cout<<"\n\t The Seating for Family is on the 2st floor,\n The menu will appear shortly there thank you.";
		i++;
		}
		else if(seating=='i'||seating=='I'){
				cout<<"\n\t The Seating for Individuals is on the 1st floor,\n The menu will appear shortly there thank you.";
				i++;
		}
		else{
				cout<<"\n\t Please enter a valid input.\n\n";
		}
		    cin.clear(); // Clears error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ask sir about this if its allowed
	}while(i==0);



	//MENU
	i=0;
	cout<<"\n\n\n";
	while(i==0){//For MENU
		int choice,subchoice,amount,price;
		cout<<"\n\t\t MENU";
		cout<<"\n\t 1. Cafe.";
		cout<<"\n\t 2. Appetizers.";
		cout<<"\n\t 3. Main Course.";
		cout<<"\n\t 4. Beverages.";
		cout<<"\n\t 5. Desserts.";
		cout<<"\n\t 6. Finish Order. ";
		cout<<"\n\n\t\t Your Choice: ";
		cin>>choice;
		switch(choice){//for diffrent function calls
            case 1:cafe(&total);break;
            case 2:appetizers(&total);break;
            case 3:maincourse(&total);break;
            case 4:beverages(&total);break;
            case 5:desserts(&total);break;
			case 6:break;

			default:
				cout<<"\n\t Invalid Input try again \n\n\n";break;
		}//switch for function call
		if(choice==6){//ending delivery
			cout<<"\n\t Thanks for ordering your order will be delivered soon. Press Enter to receive the bill.";
			getch();
            bill_rest(&total);
			break;
		}
	i=0;
	}

}//END OF FUNCTION RESTAURANT

 void cafe(int* total){	//FUNCTION FOR CAFE
	int i=1;
	while(i){
	int choice,amount;	//cafe menu
			cout<<"\n\t 1. Quetta Tea.			Rs.60 \n";
			cout<<"\n\t 2. Chai Tea.			Rs.50 \n";
			cout<<"\n\t 3. Green Tea.			Rs.30 \n";
			cout<<"\n\t 4. Latte			Rs.95 \n";
			cout<<"\n\t 5. Iced Coffee			Rs.120 \n";
			cout<<"\n\t 6. Ice Tea			Rs.90 \n";
			cout<<"\n\t 7. Mocha			Rs.125 \n";
			cout<<"\n\t 8. Matcha			Rs.210 \n";
			cout<<"\n\t 9. Caremal Macchiato		Rs.250 \n";
			cout<<"\n\t 10. Hot Chocolate		Rs.100 \n";
			cout<<"\n\n\t Your Choice: ";
			cin>>choice;
			if(choice>10 || choice<1){
			cout<<"\n\t Invalid Input try again \n\n\n";
			continue;
			}
			cout<<"\n\n\t Enter Amount: ";
			cin>>amount;
					switch(choice){//switch case for prices
						case 1:*total += (60*amount);break;
						case 2:*total += (50*amount);break;
						case 3:*total += (30*amount);break;
						case 4:*total += (95*amount);break;
						case 5:*total += (120*amount);break;
						case 6:*total += (90*amount);break;
						case 7:*total += (125*amount);break;
						case 8:*total += (210*amount);break;
						case 9:*total += (250*amount);break;
						case 10:*total += (100*amount);break;
					}//switch end for prices of cafe
						if(choice<=10 || choice>=1){
						i=0;
						}
	}
}

 void appetizers(int* total){  //FUNCTION FOR APPITIZERS
    int i=1;
	while(i){
	int choice,amount;	//cafe menu
			cout<<"\n\t 1. Shami Kebab.			    Rs.80 (per piece) \n";
			cout<<"\n\t 2. Onion Rings.			    Rs.250 (per serving) \n";
			cout<<"\n\t 3. Cheese and Crackers.                    Rs.450 (per platter) \n";
			cout<<"\n\t 4. Veggie Platter.			    Rs.350 (per platter) \n";
			cout<<"\n\t 5. Caprese Skewers.			    Rs.400 (per skewer set) \n";
			cout<<"\n\t 6. Chips and Salsa.			    Rs.230 (per serving) \n";
			cout<<"\n\t 7. Deviled Eggs.		            Rs.70 (per half egg) \n";
			cout<<"\n\t 8. Mini Sandwiches.		            Rs.120 (per piece) \n";
			cout<<"\n\t 9. Pigs in a Blanket.		            Rs.60 (per piece) \n";
			cout<<"\n\t 10. Seasoned Popcorn.		            Rs.160 (per serving) \n";
			cout<<"\n\t 11. Marinated Olives.		            Rs.290 (per bowl) \n";
			cout<<"\n\n\t Your Choice: ";
			cin>>choice;
			if(choice>11 || choice<1){
			cout<<"\n\t Invalid Input try again \n\n\n";
			continue;
			}
			cout<<"\n\n\t Enter Amount: ";
			cin>>amount;
					switch(choice){     //switch case for prices
                        case 1:*total += (80*amount);break;
                        case 2:*total += (250*amount);break;
                        case 3:*total += (450*amount);break;
                        case 4:*total += (350*amount);break;
                        case 5:*total += (400*amount);break;
                        case 6:*total += (230*amount);break;
                        case 7:*total += (70*amount);break;
                        case 8:*total += (120*amount);break;
                        case 9:*total += (60*amount);break;
                        case 10:*total += (160*amount);break;
                        case 11:*total += (290*amount);break;
                        }//switch end for prices of appitizers
						if(choice<=11 || choice>=1){
						i=0;
						}
	}
}

 void maincourse(int* total){  //FUNCTION FOR MAIN COURSE
    int i=1;
	while(i){
	int choice,amount;	//cafe menu
			cout<<"\n\t 1. Mutton Karahi                                                    PKR 1,800 (half/full serving) \n";
			cout<<"\n\t 2. Chicken Handi                                                    PKR 1,200 (half/full serving) \n";
			cout<<"\n\t 3. Beef Nihari                                                      PKR 2,200 (per serving) \n";
			cout<<"\n\t 4. Mutton Biryani                                                   PKR 850 (per serving) \n";
			cout<<"\n\t 5. Chicken Biryani                                                  PKR 700 (per serving) \n";
			cout<<"\n\t 6. Kebab Platter (mix of seekh, chapli, and reshmi kebabs)          PKR 1,500  \n";
			cout<<"\n\t 7. Peshawari Namak Mandi Karahi                                     PKR 2,500 (full serving) \n";
			cout<<"\n\t 8. Grilled Prawns                                                   PKR 1,300 per serving \n";
			cout<<"\n\t 9. Fried Fish (Lahori)                                              PKR 1,450 (per serving) \n";
			cout<<"\n\t 10. Fish Tikka                                                      PKR 1,250 (per serving) \n";
			cout<<"\n\t 11. Paneer Karahi                                                   PKR 1,400 (per serving) \n";
			cout<<"\n\t 12. Dal Makhani                                                     PKR 950 (per serving) \n";
			cout<<"\n\t 13. Mixed Vegetable Curry                                           PKR 1,100 (per serving) \n";
			cout<<"\n\t 14. Chicken Steak with Gravy                                        PKR 2,800 \n";
			cout<<"\n\t 15. Beef Medallions with Garlic Butter Sauce                        PKR 2,300 \n";
			cout<<"\n\t 16. Seafood Pasta (Spicy or Creamy)                                 PKR 1,100 \n";
			cout<<"\n\t 17. Tandoori Naan/Roti                                              PKR 60 (per piece) \n";
			cout<<"\n\t 18. Garlic Naan                                                     PKR 120 (per piece) \n";
			cout<<"\n\n\t Your Choice: ";
			cin>>choice;
			if(choice>18 || choice<1){
			cout<<"\n\t Invalid Input try again \n\n\n";
			continue;
			}
			cout<<"\n\n\t Enter Amount: ";
			cin>>amount;
					switch(choice){     //switch case for prices
						case 1:*total += (1800*amount);break;
						case 2:*total += (1200*amount);break;
						case 3:*total += (2200*amount);break;
						case 4:*total += (850*amount);break;
						case 5:*total += (700*amount);break;
						case 6:*total += (1500*amount);break;
						case 7:*total += (2500*amount);break;
						case 8:*total += (1300*amount);break;
						case 9:*total += (1450*amount);break;
						case 10:*total += (1250*amount);break;
						case 11:*total += (1400*amount);break;
						case 12:*total += (950*amount);break;
						case 13:*total += (1100*amount);break;
						case 14:*total += (2800*amount);break;
						case 15:*total += (2300*amount);break;
						case 16:*total += (1100*amount);break;
						case 17:*total += (60*amount);break;
						case 18:*total += (120*amount);break;
                        }//switch end for prices of appetizers
						if(choice<=18 || choice>=1){
						i=0;
						}
                    }//loop end

}

 void beverages(int* total){   //FUNCTION FOR BEVERAGES
    int i=1;
	while(i){
	int choice,amount;	//cafe menu
			cout<<"\n\t 1. Lassi (Sweet).                            PKR 200 (per glass) \n";
			cout<<"\n\t 2. Lassi (Salty).                            PKR 250 (per glass) \n";
			cout<<"\n\t 3. Mint Lemonade (Shikanjabeen).             PKR 150 (per glass) \n";
			cout<<"\n\t 4. Falooda.                                  PKR 400 (per serving) \n";
			cout<<"\n\t 5. Soft Drinks.(bottle)                      PKR 120  \n";
			cout<<"\n\t 6. Soft Drinks.(can)                         PKR 100 \n";
			cout<<"\n\t 7. Fresh Juices. (Orange, Mango, etc.)       PKR 120 (per glass) \n";
			cout<<"\n\t 8. Pina Colada                               PKR 220 (per glass) \n";
			cout<<"\n\t 9. Mint Margarita                            PKR 240 (per glass) \n";
			cout<<"\n\t 10. Sparkling Water.                          PKR 130 (per bottle) \n";
			cout<<"\n\n\t Your Choice: ";
			cin>>choice;
			if(choice>10 || choice<1){
			cout<<"\n\t Invalid Input try again \n\n\n";
			continue;
			}
			cout<<"\n\n\t Enter Amount: ";
			cin>>amount;
					switch(choice){     //switch case for prices
						 case 1:*total += (200*amount);break;
						 case 2:*total += (250*amount);break;
						 case 3:*total += (150*amount);break;
						 case 4:*total += (400*amount);break;
						 case 5:*total += (120*amount);break;
						 case 6:*total += (100*amount);break;
						 case 7:*total += (120*amount);break;
						 case 8:*total += (220*amount);break;
						 case 9:*total += (240*amount);break;
						 case 10:*total += (130*amount);break;
                        }//switch end for prices of beverages
						if(choice<=10 || choice>=1){
						i=0;
						}
	}//LOOP END
}//FUNCTION END FOR BEVERAGES

 void desserts(int* total){    //FUNCTION FOR DESSERTS
    int i=1;
	while(i){
	int choice,amount;	//dessert menu
			cout<<"\n\t 1. Gulab Jamun.                              PKR 80 (2 pieces) \n";
			cout<<"\n\t 2. Kheer (Rice Pudding).                     PKR 250 (per serving) \n";
			cout<<"\n\t 3. Ras Malai.                                PKR 350 (per serving) \n";
			cout<<"\n\t 4. Shahi Tukray.                             PKR 400 (per serving) \n";
			cout<<"\n\t 5. Halwa (Gajar).                            PKR 370 (per serving) \n";
			cout<<"\n\t 6. Molten Lava Cake                          PKR 850 \n";
			cout<<"\n\t 7. Cheesecake (Blueberry).                   PKR 240 (per slice) \n";
			cout<<"\n\t 8. Chocolate Fudge Brownie.                  PKR 200 \n";
			cout<<"\n\t 9. Sundaes (Fruit).                          PKR 210 \n";
			cout<<"\n\t 10. Sundaes (Chocolate).		      PKR 250 \n";
			cout<<"\n\t 11. Seasonal Fruit Trifle.                   PKR 230 (per serving) \n";
			cout<<"\n\n\t Your Choice: ";
			cin>>choice;
			if(choice>11 || choice<1){
			cout<<"\n\t Invalid Input try again \n\n\n";
			continue;
			}
			cout<<"\n\n\t Enter Amount: ";
			cin>>amount;
					switch(choice){     //switch case for prices
						case 1:*total += (80*amount);break;
						case 2:*total += (250*amount);break;
						case 3:*total += (350*amount);break;
						case 4:*total += (400*amount);break;
						case 5:*total += (370*amount);break;
						case 6:*total += (850*amount);break;
						case 7:*total += (240*amount);break;
						case 8:*total += (200*amount);break;
						case 9:*total += (210*amount);break;
						case 10:*total += (250*amount);break;
						case 11:*total += (230*amount);break;
                        }//switch end for prices of desserts
						if(choice<=11 || choice>=1){
						i=0;
						}
	}
}

 void bill_rest(int* total){

    //loop for ints in integer is /10
    //int size_name = name.length();
    //int j=1;
cout<<endl;

for(int i=1;i<=35;i++) //for header stars
cout<<"**";

    //body start of the bill
    cout<<"\n\n  BILL TO; ";
    cout<<"\n\n\t\t CUSTOMER NAME: "<<name;
    int ID=0;
    cout<<"\n\n\t\t CUSTOMER ID:   "<<ID+1;

    cout<<"\n\n\n\t\t SUB-TOTAL:            "<<*total;
    float tax = *total*0.075;
    cout<<"\n\t\t (+) GST:              "<<tax;
    cout<<"\n\t\t (+) SERVICE CHARGES:  "<<300<<"\n\n\n";
    for(int i=1;i<=35;i++)
        cout<<"-_";

        cout<<"\n\n\t\t    TOTAL BILL:        "<<*total+tax+300<<"\n\n\n";

//body end of bill
for(int i=1;i<=35;i++) //for footer stars
cout<<"**";

//FILE HANDLING PART
 ofstream MYFILE("DATA OF RESTAURANT.txt", ios::app); //app for append mode file handling
MYFILE<<"\t\tCUSTOMER DATA\n\n\n";
MYFILE<<"\n Customer Name: "<<name;
MYFILE<<"\n\n Customer ID: : "<<ID+1;
MYFILE<<"\n\n\t TOTAL BILL: "<<*total;
MYFILE<<"\n\n\t GST: "<<tax;
MYFILE<<"\n\n\t YOUR COST: "<<*total*0.6;
MYFILE<<"\n\n\t SERVICES: "<<300<<"\n\n";
for(int i=1;i<=35;i++) //in text file to separate data
MYFILE<<"**";
MYFILE<<"\n\n PROFIT: "<<*total-(*total*0.6);
MYFILE<<"\n\n";
for(int i=1;i<=35;i++) //in text file to separate data
MYFILE<<"__";
MYFILE<<"\n\n";
MYFILE.close();
}

// HOTEL (MUIZ)

void hotel(){   //FUNCTION FOR HOTEL MANAGEMENT



    int Prices[] = {1200, 2300, 4500, 6000, 10000};
    int availability[] = {1, 1, 1, 1, 1};    // if available 1 and not available 0

    while (1) {
            int choice;
        cout << "\nHotel Management System\n";
        cout << "1. Show Available rooms\n";
        cout << "2. Book a room\n";
        cout << "3. Checkout of a room\n";
        cout << "4. Exit the System\n";
        cout << "Enter the service you want to avail: ";
        cin >> choice;



        switch (choice) {
            case 1: showcase(Prices,availability);
            break;

            case 2:
                showcase(Prices,availability);
                roomchoice(Prices,availability);
            break;                                      // Book a room

            case 3: checkout(Prices,availability);
            break;

            case 4: return;
            break;

            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        } // switch-case
    }//loop


} //hotel function ended

void showcase(int *prices,int *available){  //FUNCTION FOR AVAILABLE ROOMS


    cout << "\nAvailable Rooms: \n";

    int RoomAvailable = 0;
    for (int i = 0; i <5; i++) {
    if (*(available + i) == 1) {
    cout << i + 1 << ". " << Types[i] << " - $" << *(prices + i) << " per night\n";
    RoomAvailable = 1;
        }//if statement ended
    }//for loop end
    if (!RoomAvailable)
    cout << "Sorry, No rooms available.\n";
}

void roomchoice(int* prices,int* available){    //FUNCTION FOR ROOM SELECTION
    int RoomChoice;

do{
                cout << "Choose a room between 1-5: ";
                cin >> RoomChoice;
                if (RoomChoice < 1 || RoomChoice > 5){
                    cout << "\n\tEnter a suitable number for the room.\n";
                }
                else if (*(available+RoomChoice - 1) == 1) {
                    cout << "\n\tYou have successfully booked " << Types[RoomChoice - 1] << " room.\n";
                   *(available+RoomChoice-1) = 0 ; // Marks the room as booked
                }

                else
                    cout << "\nSorry, this room is already booked. Choose another room.\n";

}while(RoomChoice < 1 || RoomChoice > 5);
}//room choice end

void checkout(int *prices,int * available){ // CHECKOUT OF ROOMS / BILL
                int RoomChoice, Days;
                 double TotalPrice;
                 int ID=0;
do{

                cout << "Choose a room between 1-5 you want to check out from: ";
                cin >> RoomChoice;
                if (RoomChoice < 1 || RoomChoice > 5) {
                    cout << "\n\tEnter a suitable number for the room.\n";
                }
                else if (*(available+(RoomChoice - 1))== 0) {
                    cout << "\n\tYou have successfully checked out from " << Types[RoomChoice - 1] << " room.\n";
                    cout << "\n\tEnter the number of days you have stayed: ";
                    cin >> Days;

for(int i=1;i<=35;i++) //for header stars
cout<<"**";
                    TotalPrice = *(prices+ (RoomChoice - 1)) * Days;
                    cout<<"\n\n  BILL TO; ";
                    cout<<"\n\n\t CUSTOMER NAME: "<<name;
                    ID++;
                    cout<<"\n\n\t CUSTOMER ID:   "<<ID+1;
                    cout<<"\n\n\n\t DAYS STAYED:            "<<Days;
                    cout<<"\n\n\n\t\t SUB-TOTAL:            "<<TotalPrice;
                    float tax = TotalPrice*0.075;
                    cout<<"\n\t\t (+) GST:              "<<tax;
                    cout<<"\n\t\t (+) SERVICE CHARGES:  "<<500<<"\n\n\n";
                    for(int i=1;i<=35;i++)
                    cout<<"-_";
                    cout<<"\n\n\t\t    TOTAL BILL:        "<<TotalPrice+tax+500<<"\n\n\n";


                    *(available+(RoomChoice - 1)) = 1; // Marks the room as available again

for(int i=1;i<=35;i++) //for footer stars
cout<<"**";

                }
                else {
                    cout << "\nSorry, this room is not booked. Choose another room.\n";
                }

}while(RoomChoice < 1 || RoomChoice > 5);


//FILE HANDLING PART
ofstream MYFILE("DATA OF HOTEL.txt", ios::app); //app for append mode file handling
MYFILE<<"\t\tCUSTOMER DATA\n\n\n";
MYFILE<<"\n Customer Name: "<<name;
MYFILE<<"\n\n Customer ID: : "<<ID;
MYFILE<< "\n\n ROOM TYPE: "<<Types[RoomChoice - 1];
MYFILE<<"\n\n\n\n\t TOTAL BILL: "<<TotalPrice;
MYFILE<<"\n\n\t GST: "<<TotalPrice*0.075;//7.5% tax
MYFILE<<"\n\n\t YOUR COST: "<<TotalPrice*0.3;
MYFILE<<"\n\n\t SERVICES: "<<500<<"\n\n";
for(int i=1;i<=35;i++) //in text file to separate data
MYFILE<<"**";
MYFILE<<"\n\n PROFIT: "<<TotalPrice-(TotalPrice*0.3);
MYFILE<<"\n\n";
for(int i=1;i<=35;i++) //in text file to separate data
MYFILE<<"__";
MYFILE<<"\n\n";
MYFILE.close();
} // end of checkout
