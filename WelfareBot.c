// Welfare Bot

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    system("color C");
    printf("Hey there!, I hope you are doing well.\n");
    printf("I am the Welfare bot who tries to make your life easier here at IIT Patna.\nBefore we move ahead please enter your name: ");
    char Name[50];
    gets(Name);
    system("cls");
    system("color B");
    printf("So, %s What should I help you with\n", Name);
    int serial_no;

start:
    system("color B");
    printf("1.Bus Service Schedule\n2.Emergency Contact\n3.Gymkhana Team\n4.Leave Portal\n5.Professor's Contact Information\n6.Doctor's Schedule\n7.Guest House Booking\n0.Exit\n");
    printf("Please Enter the respective serial number: ");
    scanf("%d", &serial_no);
    system("cls");
    system("color 6");
    if (serial_no == 1)
    {
        int busno;
    back1:
        printf("Press No. 1 (weekdays) /2 (weekends) : ");
        scanf("%d", &busno);
        printf("\n");
        if (busno == 1)
        { // bus detail
            printf("    Details for Bus No.1 :\n");
            printf("    Bus 1 (BR 01PM 6774)\n");
            printf("    Driver: Mr. Jitendra Ji (9386118546)\n\n	");
            printf("	22 May onwards(Weekdays)\n	");
            printf("Departure Time	From	                To\n");
            printf("     6:30       	Patna (Bihar Museum)	IIT\n");
            printf("     7:45	        Kalam	                Tut Block\n");
            printf("     7:55	        Kalam	                Tut Block\n");
            printf("     8:50        	Kalam	                Tut block\n");
            printf("     9:00	        Kalam	                Tut block\n");
            printf("     9:50	        Kalam	                Tut Block\n");
            printf("     10:10	        Tut Block	            Kalam\n");
            printf("     10:50	        Kalam	                Tut Block\n");
            printf("     11:10	        Tut Block	            Kalam\n");
            printf("     11:50	        Kalam	                Tut Block\n");
            printf("     12:10	        Tut Block	            Kalam\n");
            printf("     13:05	        Tut Block	            Kalam\n");
            printf("     13:15	        Tut Block	            Kalam\n");
            printf("     13:45	        Kalam	                Tut Block\n");
            printf("     13:55	        Kalam	                Tut Block\n");
            printf("     14:05	        Kalam	                Tutblock\n");
            printf("     14:10	        Tut Block	            Kalam\n");
            printf("     14:50	        Kalam	                Tut Block\n");
            printf("     15:10	        Tut Block	            Kalam\n");
            printf("	 15:50	        Kalam	                Tut Block\n");
            printf("     16:10	        Tut Block	            Kalam\n");
            printf("     16:50	        Kalam	                Tutblock\n");
            printf("     17:05	        Tut Block	            Kalam\n");
            printf("     17:15	        IIT	                    Patna (Bihar Museum)\n\n");

            printf("General instructions while on/offboarding the bus:\n ");
            printf("1. Please arrive at the bus stop at least five minutes before departure. SWB will not be responsible if you arrive at the last minute and miss your bus.\n");
            printf("2. When boarding the bus outside campus, keep your ID card handy or you will not be allowed on board.\n");
            printf("3. Please send an email to swb@iitp.ac.in if you have any questions or concerns regarding bus services.\n");
            printf("4. Immediately inform us if the bus staff intentionally allowed outsiders on board, and provide us with a photo of the same.\n");
            printf("5. You may be banned from using bus services for up to 6 months if you make the bus wait at a stoppage for any reason.\n");
            printf("6. Boarding buses elsewhere than at bus stops on campus is prohibited. We will take strict action against defaulters.\n");
            printf("7. Please avoid standing on the doors as it may lead to an accident.\n");
            printf("\n");
        }
        else if (busno == 2)
        {
            printf("    Details for Bus No.2 :\n");
            printf("    Bus 1 (BR 01PM 6774)\n");
            printf("    Driver: Mr. Jitendra Ji (9386118546)\n\n	");
            printf("	22 May onwards(Weekends)\n	");
            printf("Departure Time	      From	                 To\n");
            printf("    7:00	          Patna (Bihar Museum) 	 IIT\n");
            printf("    9:30	          IIT(Kalam)	         Patna (Bihar Museum)\n");
            printf("    15:00	          Patna (Bihar Museum)	 IIT\n");
            printf("    17:00	          IIT(Kalam)	         Patna (Bihar Museum)\n\n");
            printf("General instructions while on/offboarding the bus:\n ");
            printf("1. Please arrive at the bus stop at least five minutes before departure. SWB will not be responsible if you arrive at the last minute and miss your bus.\n");
            printf("2. When boarding the bus outside campus, keep your ID card handy or you will not be allowed on board.\n");
            printf("3. Please send an email to swb@iitp.ac.in if you have any questions or concerns regarding bus services.\n");
            printf("4. Immediately inform us if the bus staff intentionally allowed outsiders on board, and provide us with a photo of the same.\n");
            printf("5. You may be banned from using bus services for up to 6 months if you make the bus wait at a stoppage for any reason.\n");
            printf("6. Boarding buses elsewhere than at bus stops on campus is prohibited. We will take strict action against defaulters.\n");
            printf("7. Please avoid standing on the doors as it may lead to an accident.\n");
        }
        int chk;
        printf("%s do you need to go back(2) on same tab or to main menu(1) or want to exit(0)\n", Name);
        scanf("%d", &chk);
        system("cls");
        if (chk == 0)
        {
            printf("Hope to see you again, Have a nice day!");
            return 0;
        }
        else if (chk == 2)
        {
            goto back1;
        }
        else
        {
            goto start;
        }
    }
    else if (serial_no == 2)
    {
    back2:
        printf("Please Enter Your Choice:\n1.IITP Hospital Helpline Numbers 24*7.\n2.NSMCH Helpline Numbers 24*7.\n3.Security Helpline Numbers 24*7.\n4.A.P.J Abdul Kalam Hostel.\n5.Asima Hostel.\n6.Married Hostel.\n7.Gymkhana Core Members\n");
        int choice;
        // Taking choice input from the user
        scanf("%d", &choice);
        if (choice == 1)
        { // choice1.IITP Hospital Helpline Numbers 24*7
            printf("Ambulance:9264193927.\nApollo Pharmacy:7605035992.\nMedical Officer(Dr. Shobhakant):9612747626,8259846524.\nMr.Ravi:8210893435,7488589487.\nPIC_Medical(Dr. Saurabh Kumar Pandey):7321893616.\nHospital Reception:06115233800.\nInstitute Ambulance:9508910134.\n");
        }
        else if (choice == 2)
        { // choice2.NSMCH Helpline Numbers 24*7.
            printf("Bhola Jee:9264193928,8825317071.\nHospital Manager:9102403264.\nMr.Aryan Singh:9264452653,9386896999.\nMr.Sanjay Verma:9264193992.\n");
        }
        else if (choice == 3)
        { // choice3.Security Helpline Numbers 24*7.
            printf("Security Officer(Mr. Deepak Chourasia):8340269042,9574578404.\nSecurity Patrolling Vehicle:8102917508.\nSecurity Supervisor(Mr. Prahlad Singh):9122171516.\nSecurity Supervisor(Mr. HariShankar):6202159737.\nSecurity Supervisor(Mr.T N Sharma):8860345289.\n");
        }
        else if (choice == 4)
        { // choice4.A.P.J Abdul Kalam Hostel.
            printf("Associate Warden (A & B block)(Dr. Shailesh Kumar Tiwari):06115233074.\nCaretaker(Mr.Sujit tiwari):9122737307.\n");
        }
        else if (choice == 5)
        { // choice5.Asima Hostel.
            printf("Warden(Dr.Sweta Sinha):06115233397.\nHostel Office(Administration)(Ms Nishita):9718394431.\nCaretaker(Ms Anamika Singh):9771000367.\nCaretaker(Ms.Bibha Jha):9835496701,6206002878.\nCaretaker(Nilam Singh):7004655822.\n");
        }
        else if (choice == 6)
        { // choice6.Married Hostel.
            printf("Warden(Dr Udit Satija):06115233815.\n");
        }
        else if (choice == 7)
        { // choice7.Gymkhana Core Members.
            printf("Vice President(Atul Kumar):7992457313.\nGeneral Secretary, Students Welfare Board(Shivam Yadav):7268077407.\nGeneral Secretary, Games and Sports Council(Aaryan Dhakad):7489782274.\nGeneral Secretary, HoSCA(Chirag Bhardwaj):6397307289.\nGeneral Secretary, Students' Technical Council(Rishikesh Devanathan):9003568771.\nGeneral Secretary, Hostel Affairs Council(Kautuk Kumar):8969721307.\nUnder Graduate Representative(Rohit Kumar):7209771799.\nPost Graduate Representative(Chandra Prakash Singh):8447143549.\n");
        }
        int chk;
        printf("%s do you need to go back(2) on same tab or to main menu(1) or want to exit(0)\n", Name);
        scanf("%d", &chk);
        system("cls");
        if (chk == 0)
        {
            printf("Hope to see you again, Have a nice day!");
            return 0;
        }
        else if (chk == 2)
        {
            goto back2;
        }
        else
        {
            goto start;
        }
    }
    else if (serial_no == 3)
    {
        int team;
    back3:
        printf("Type :\n1.For GYMKHANA CORE\n2.For STUDENTS' WELFARE BOARD\n3.For GAMES AND SPORTS COUNCIL\n4.For HOUSE OF SOCIO AND CULTURAL AFFAIRS\n5.For STUDENTS' TECHNICAL COUNCIL\n6.For HOSTEL AFFAIRS COUNCIL\n7.For CHIEF HOSTEL SECRETARY\n8.For ACADEMICS AND CAREER COUNCIL SECRETARY\n");
        scanf("%d", &team);
        if (team == 1)
        { // gymkhana team
            printf("GYMKHANA CORE\n");
            printf("Position                                                 Name                   Council Mailing ID         Contact Number\n");
            printf("Vice President                                         Atul Kumar              vpgymkhana@iitp.ac.in        7992457313\n");
            printf("General Secretary,Studemts' welfare Board              Shivam Yadav            gensec_welfare@iitp.ac.in    7268077407\n");
            printf("General Secretary, Games and Sports' Council           Aaryan Dhakad           gensec_sports@iitp.ac.in     7489782274\n");
            printf("General Secretary, HoSCA                               Chirag Bhardwaj         gensec_cult@iitp.ac.in       6397307289\n");
            printf("General Secretary, Student' Technical Council          Rishikesh Devanathan    gensec_tevh@iitp.ac.in       9003568771\n");
            printf("General Secretary, Hostel Affairs Council              Kautuk Kumar            gensec_hac@iitp.ac.in        8969721307\n");
            printf("Under Graduate Representative                          Rohit Kumar             ugr@iitp.ac.in               7209771799\n");
            printf("Post Graduate Representative                           Chandra Prakash Singh   pgr_gymkhana@iitp.ac.in      8447143549\n");
        }

        else if (team == 2)
        {
            printf("STUDENTS'WELFARE BOARD \n"); //  student welfare
            printf(" Position                                 Name                  Council Mail ID         Contact Number\n");
            printf("Welfare Secretary, PG Boys               Kundan Saha            swb@iitp.ac.in          8927171848 \n");
            printf("Welfare Secretary, PG Girls              Ayushi Pandey          swb@iitp.ac.in          7607810019 \n");
            printf("Welfare Secretary, Senior Year Boys'     Arav Aarya             swb@iitp.ac.in          7301514267\n");
            printf("Welfare Secretary, Junior Year Boys'     Ajay Chauhan           swb@iitp.ac.in          9812899120\n");
            printf("Welfare Secretary, Sophomore Year Boys'  N. Pardeep Reddy       swb@iitp.ac.in          6281158553\n");
            printf("Welfare Secretary, UG Girls'             Chintada Rizvi Kumari  swb@iitp.ac.in          6304262653\n");
        }

        else if (team == 3)
        { //  sports council
            printf("GAMES AND SPORTS' COUNCIL\n");
            printf("Position                                            Name                          Personal Mailing ID                Contact Number \n");
            printf("Sports Secretary, PhD Boys'	                    Sambit Kumar Biswal             sambit_2121ph09@iitp.ac.in	         9348271044 \n");
            printf("Sports Secretary, PG Boys'	                    Parikshit Gautam                parikshit_2211ce29@iitp.ac.in	     7466011054\n");
            printf("Sports Secretary, Senior Year Boys'	            Arijit Das                      arijit_2001cb11@iitp.ac.in	         7439860023\n");
            printf("Sports Secretary, Junior Year Boys'	            Shubham Satyam                  shubham_2101ce54@iitp.ac.in	         8340389862\n");
            printf("Sports Secretary, Sophomore Year Boys'	        Kaustubh Kumar                  2201mm14_kaustubh@iitp.ac.in	     7903246727\n");
            printf("Sports Secretary, UG Girls' 	                Kashish Garg                    kashish_2101mc26@iitp.ac.in	         9685531042\n");
        }

        else if (team == 4)
        { // HOSCA
            printf("HOUSE OF SOCIO AND CULTURAL AFFAIRS \n");
            printf("Position                                          Name                       Personal Mailing ID                Contact Number\n");
            printf("HoSCA Secretary, PG Boys'                     Nikhil Dev Srivastava          nikhil_2211mc201@iitp.ac.in        735501785\n");
            printf("HoSCA Secretary, PG Girls'	                  Janvi Rustagi                  janvi_2212ma12@iitp.ac.in	        8295357497\n");
            printf("HoSCA Secretary, Sophomore Year Boys'	      Ade Balakrishna                2201cb05_ade@iitp.ac.in	        9000245082\n");
            printf("HoSCA Secretary, UG Girls'	                  Shreshy Srivastava             shreshy_2101cb56@iitp.ac.in	    9046776086\n");
        }

        else if (team == 5)
        { // STC
            printf("STUDNETS' TECHNICAL COUNCIL \n");
            printf("Position                                         Name                 Personal Mailing ID.      Contact Number \n");
            printf("Technical Secretary, Senior Year Boys'	       Ayush Raj           ayush_2001ee10@iitp.ac.in	8229859377 \n");
            printf("Technical Secretary, Junior Year Boys'	       Aryan Sahoo         aryan_2101ai06@iitp.ac.in	8383966386 \n");
            printf("Technical Secretary, Sophomore Year Boys'	   Akhand Singh        2201cs11_akhand@iitp.ac.in	7007616490 \n");
            printf("Technical Secretary, UG Girls'	               Pragya Harsh        pragya_2101ai23@iitp.ac.in	9968245141	 \n");
        }

        else if (team == 6)
        { // HAC
            printf("HOSTEL AFFAIRS COUNCIL \n");
            printf("Position                                             Name                 Personal Mailing ID          Contact Number \n");
            printf("Hostel Affairs Secretary, PhD Boys'	            Towhidur Rahaman         towhidur_2021ph32@iitp.ac.in	8265834338 \n");
            printf("Hostel Affairs Secretary, PG Boys'	            Prashant Raj             prashant_2211me33@iitp.ac.in	6204975324	 \n");
            printf("Hostel Affairs Secretary, PG Girls'	            Poushali Das             poushali_2212ma17@iitp.ac.in	6291507522		 \n");
            printf("Hostel Affairs Secretary, Junior Year Boys'	    Manish Kumar Meena       manish_2101ce37@iitp.ac.in	    8690715482 \n");
            printf("Hostel Affairs Secretary, Sophomore Year Boys'	Aashish Kumar Mishra     2201ce01_aashish@iitp.ac.in	9304139313 \n");
            printf("Hostel Affairs Secretary, UG Girls'	            Baddala Shreevaishnavi   baddala_2101mc14@iitp.ac.in	7989781193	\n");
            printf("Mess Secretary, PhD Boys'	                    Joydeb Saha              joydeb_2121ee32@iitp.ac.in	    8918373262	 \n");
            printf("Mess Secretary, PG Boys'	                    Pritesh Shrivastava      pritesh_2211ce39@iitp.ac.in	7982683232 \n");
            printf("Mess Secretary, Junior Year Boys'	            T.V.S.S. Soureesh        soureesh_2101mm35@iitp.ac.in	7893484270\n");
            printf("Mess Secretary, Sophomore Year Boys'	        Arichay Sharma           2201ee13_arichay@iitp.ac.in	9427129588 \n");
            printf("Mess Secretary, UG Girls'	                    Kashika Aggarwal         2201cs35_kashika@iitp.ac.in	8427632279 \n");
        }

        else if (team == 7)
        { // CHS
            printf("CHIEF HOSTEL SECRETARY\n");
            printf("Position                                          Name                   Personal Mail ID               Contact Number\n");
            printf("Chief Raman and Married Hostel Secretary       Usakoyala Ram Prasad     usakoyala_2101ee78@iitp.ac.in	8125610135	 \n");
            printf("Chief Asima Hostel Secretary	               Jadhav Neha Kishor       jadhav_2001ee21@iitp.ac.in	    8668373407 \n");
        }

        else if (team == 8)
        { // ACADEMICS AND CAREER COUNCIL SECRETARY
            printf("ACADEMICSAND CAREER COUNCIL SECRETARY\n");
            printf("Position                                                     Name            Personal Mail ID           Contact Number\n");
            printf("Academic and Career Council Secretary, UG Junior Year	    Anuj Sharma      anuj_2101cs11@iitp.ac.in	8284890850 \n");
        }
        int chk;
        printf("%s do you need to go back(2) on same tab or to main menu(1) or want to exit(0)\n", Name);
        scanf("%d", &chk);
        system("cls");
        if (chk == 0)
        {
            printf("Hope to see you again, Have a nice day!");
            return 0;
        }
        else if (chk == 2)
        {
            goto back3;
        }
        else
        {
            goto start;
        }
    }
    else if (serial_no == 4)
    {
        // number 4 -- Leave portal//

        char webmail[100], password[100], name[100], roll[8], from[50], to[50], reason[500];
        int days;
    back4:
        printf("Please enter your login credentials  \n");

        printf("Enter webmail id : ");
        scanf("%s", &webmail); // webmail id//

        printf("Enter the password : ");
        scanf("%s", &password);       // password //            printf("Enter the following details :\n") ;
        printf("Enter your name : "); // name//
        scanf("%s", &name);

        printf("Enter your roll number : "); // Roll number//
        scanf("%s", &roll);

        printf("Enter the number of days of leave you want : "); // days//
        scanf("%d", &days);

        printf("Enter the date of leave period(From)(DD/MM/YYYY): "); // dates//
        scanf("%s", &from);

        printf("Enter the date of leave period(To)(DD/MM/YYYY): "); // dates//
        scanf("%s", &to);

        printf("Enter the reason for leave : "); // reason//
        scanf("%s", &reason);

        printf("Your application for leave has been submitted for %d days from %s to %s.\n", days, from, to);
        printf("You will get mail regarding the confirmation and further required documents should be submitted in your respective department office.\n");
        int chk;
        printf("%s do you need to go back(2) on same tab or to main menu(1) or want to exit(0)\n", Name);
        scanf("%d", &chk);
        system("cls");
        if (chk == 0)
        {
            printf("Hope to see you again, Have a nice day!");
            return 0;
        }
        else if (chk == 2)
        {
            goto back4;
        }
        else
        {
            goto start;
        }
    }
    else if (serial_no == 5)
    { // PROFFESSORS NO
    back5:
        printf("Enter the serial number of the subject for which you want the proffessors no.\n");

        printf("1. CS 102 Programming and Data Structures \n");
        printf("2. PH 103 Physics - I \n");
        printf("3. Introduction Chemistry \n");
        printf("4. EE101 Electrical Sciences \n");
        printf("5. MA 102 Mathematics - II \n");
        printf("6. ME 102 Enginerring Mechanics \n");
        printf("7. Enginerring drawing \n");
        int u, v;
        scanf("%d", &u);
        // u is a variable which store integer value //

        if (u == 1)
        {

            printf("Enter the serial number of the one you want the contact information \n");

            printf("1. Satendra Kumar \n");
            printf("2. Chandranath Adak \n");
            scanf("%d", &v);
            // v is a variable which store integer value //

            if (v == 1)
            {
                printf("Email - satendra@iitp.ac.in\n");
                printf("Phone no. - 7076316586\n");
            }

            if (v == 2)
            {
                printf("Email - chandranath@iitp.ac.in\n");
            }
        }

        if (u == 2)
        {

            printf("Enter the serial number of the one you want the contact information \n");

            printf("1. Manas Kumar Sarangi \n");
            printf("2. Neha Kiritikumar Shah \n");
            scanf("%d", &v);

            if (v == 1)
            {
                printf("Email - mksarangi@iitp.ac.in\n");
                printf("Phone no. - 6123028617\n");
            }
            if (v == 2)
            {
                printf("Email - nehashah@iitp.ac.in\n");
                printf("Phone no. - 6123028615\n");
            }
        }

        if (u == 3)
        {
            printf("1. Sahid Hussain \n");
            printf("Email - sahid@iitp.ac.in\n");
            printf("Phone no. - +916123028022\n");
        }

        if (u == 4)
        {

            printf("Enter the serial number of the one you want the contact information \n");

            printf("1. Preetam Kumar \n");
            printf("2. Ahmad Ali \n");
            scanf("%d", &v);

            if (v == 1)
            {
                printf("Email - pkumar@iitp.ac.in\n");
                printf("Phone no. - 6123028048 \n");
            }
            if (v == 2)
            {
                printf("Email - ali@iitp.ac.in\n");
                printf("Phone no. - 6123028044\n");
            }
        }

        if (u == 5)
        {

            printf("Enter the serial number of the one you want the contact information \n");

            printf("1. N. K. Tomar \n");
            printf("2. Dr. Shailesh Kumar Tiwari\n");
            printf("3. Prashant Kumar Srivastava\n");
            scanf("%d", &v);

            if (v == 1)
            {
                printf("Email - nktomar@iitp.ac.in\n");
                printf("Phone no. - 6123028021 \n");
            }
            if (v == 2)
            {
                printf("Email - sktiwari@iitp.ac.in\n");
            }
            if (v == 3)
            {
                printf("Email - pksri@iitp.ac.in\n");
                printf("Phone no. - 6123028033 \n");
            }
        }

        if (u == 6)
        {

            printf("Enter the serial number of the one you want the contact information \n");

            printf("1. Murshid Imam \n");
            printf("2. Sunil Kumar Singh \n");
            scanf("%d", &v);

            if (v == 1)
            {
                printf("Email - murshid@iitp.ac.in\n");
                printf("Phone no. - +916123028699 \n");
            }
            if (v == 2)
            {
                printf("Email - sunils@iitp.ac.in\n");
            }
        }

        if (u == 7)
        {

            printf("Enter the serial number of the one you want the contact information \n");

            printf("1. Om Prakash \n");
            printf("2. Akshar \n");
            scanf("%d", &v);

            if (v == 1)
            {
                printf("Email - om.prakash@iitp.ac.in\n");
                printf("Phone no. - +916123028193 \n");
            }
            if (v == 2)
            {
                printf("Email - akshar@iitp.ac.in\n");
            }
        }
        int chk;
        printf("%s do you need to go back(2) on same tab or to main menu(1) or want to exit(0)\n", Name);
        scanf("%d", &chk);
        system("cls");
        if (chk == 0)
        {
            printf("Hope to see you again, Have a nice day!");
            return 0;
        }
        else if (chk == 2)
        {
            goto back5;
        }
        else
        {
            goto start;
        }
    }
    else if (serial_no == 6)
    { // HOSPITAL VISITING SCHEDULE
    back6:
        printf("Enter the serial number of the day of visiting the hospital\n");
        printf("1.MONDAY\n");
        printf("2.TUESDAY\n");
        printf("3.WEDNESDAY\n");
        printf("4.THURSDAY\n");
        printf("5.FRIDAY\n");
        printf("6.SATURDAY\n");
        printf("7.SUNDAY\n");
        int u, v;
        scanf("%d", &u);
        // u is a variable which store integer value//
        if (u == 1) // Doctors detail
        {
            printf("Dr.Sudhir kumar from 9:00am to 3:00pm\n");
            printf("Dr.O.P Singh from 3:00pm to 10:00pm\n");
            printf("Dr.O.P Singh from 10:00pm to 9:00am\n");
        }
        if (u == 2)
        {
            printf("Dr.O.P Singh from 9:00am to 3:00pm\n");
            printf("Dr.Sudhir kumar from 3:00pm to 10:00pm\n");
            printf("Dr.Sudhir kumar from 10:00pm to 9:00am\n");
        }
        if (u == 3)
        {
            printf("Dr.O.P Singh from 9:00am to 3:00pm\n");
            printf("Dr.Sudhir kumar from 3:00pm to 10:00pm\n");
            printf("Dr.Sudhir kumar from 10:00pm to 9:00am\n");
        }
        if (u == 4)
        {
            printf("Dr.Sudhir kumar from 9:00am to 3:00pm\n");
            printf("Dr.O.P Singh from 3:00pm to 10:00pm\n");
            printf("Dr.O.P Singh from 10:00pm to 9:00am\n");
        }
        if (u == 5)
        {
            printf("Dr.O.P Singh from 9:00am to 3:00pm\n");
            printf("Dr.Saroj kumar from 3:00pm to 10:00pm\n");
            printf("Dr.O.P Singh from 10:00pm to 9:00am\n");
        }
        if (u == 6)
        {
            printf("Dr.Sudhir Kumar from 9:00am to 3:00pm\n");
            printf("Dr.Saroj kumar from 3:00pm to 10:00pm\n");
            printf("Dr.Sudhir Kumar from 10:00pm to 9:00am\n");
        }
        if (u == 7)
        {
            printf("On which sunday you are visiting\n");
            printf("1. 1st sunday\n");
            printf("2. 2nd sunday\n");
            printf("3. 3rd sunday\n");
            printf("4. 4th sunday\n");
            scanf("%d", &v);
            // v is a variable used to store integer value//
            if (v == 1)
            {
                printf("Dr.O.P Singh from 9:00am to 3:00pm\n");
                printf("Dr.Sudhir kumar from 3:00pm to 10:00pm\n");
                printf("Dr.Sudhir kumar from 10:00pm to 9:00am\n");
            }
            if (v == 2)
            {
                printf("Dr.Sudhir kumar from 9:00am to 3:00pm\n");
                printf("Dr.O.P Singh from 3:00pm to 10:00pm\n");
                printf("Dr.O.P Singh from 10:00pm to 9:00am\n");
            }
            if (v == 3)
            {
                printf("Dr.O.P Singh from 9:00am to 3:00pm\n");
                printf("Dr.Sudhir kumar from 3:00pm to 10:00pm\n");
                printf("Dr.Sudhir kumar from 10:00pm to 9:00am\n");
            }
            if (v == 4)
            {
                printf("Dr.Sudhir kumar from 9:00am to 3:00pm\n");
                printf("Dr.O.P Singh from 3:00pm to 10:00pm\n");
                printf("Dr.O.P Singh from 10:00pm to 9:00am\n");
            }
        }
        int chk;
        printf("%s do you need to go back(2) on same tab or to main menu(1) or want to exit(0)\n", Name);
        scanf("%d", &chk);
        system("cls");
        if (chk == 0)
        {
            printf("Hope to see you again, Have a nice day!");
            return 0;
        }
        else if (chk == 2)
        {
            goto back6;
        }
        else
        {
            goto start;
        }
    }
    else if (serial_no == 7)
    { // Guest House Booking
        char webmail[100], name[100], roll[8], mnt[50], arr[50], reason[500];
        int days, a;
    back7:
        printf("IIT Patna guest house is situated at B2-residential complex IITP campus, Bihta. This facility is developed to provide comfortable accommodation to guests visiting IIT Patna for official work, attending conference/seminar/workshop/JEE/GATE meetings, etc. Accommodation is also provided to the guests of IIT staff/faculty members and parents of IITP students. The second and third floors of the building, comprising of 24 rooms are used to run the Guest House. All rooms are equipped with AC and a high-speed Wifi internet facility. There are eight rooms are having attached toilets and sixteen rooms are common toilets. A full-fledged canteen equipped with all modern facilities is also available in the guesthouse.\n The full address of IIT Patna guest house is: \n\n B2-002, Residential Complex of IIT Patna Campus \n Bihta \n Pin:801106\n");
        printf("Press 1 (For contact details) /2 (For booking): \n");
        scanf("%d", &a);
        if (a == 1)
        {
            printf(" 1)Dr. Amarnath Hegde \n PIC Campus Amenities\n Email: pic_ca@iitp.ac.in\nPhone: 06115-2338031 \n\n2) Mr. Purna Chandra Mandal \n Attendant cum Caretaker\n Email: pcmandal@iitp.ac.in\n Phone: 06115-2338772 \n\n 3) Amit Kumar Chaudhary\n Cook Cum Caretaker\n Email: achaudhary@iitp.ac.in\n Phone: 06115-2338772 \n\n 4) Bappa Ghosh\n Cook Cum Caretaker\n Email: bappa@iitp.ac.in\n Phone: 06115-2338772 \n\n");
        }

        else if (a == 2)
        {
            printf("\nFor guest house booking provide following details. \n");
            printf("Enter webmail id : ");
            scanf("%s", &webmail); // webmail id//

            printf("Enter your name : "); // name//
            scanf("%s", &name);

            printf("Enter month for guest house booking : "); // month//
            scanf("%s", &mnt);

            printf("Enter the date of arrival of guests : "); // date//
            scanf("%s", &arr);

            printf("Enter the number of rooms you want to book: "); // days//
            scanf("%d", &days);

            printf("Enter the reason of visting IIT Patna: "); // reason//
            scanf("%s", &reason);

            printf("\nYour application for guest house booking has been submitted.\n");
            printf("You will get mail regarding the confirmation and further documents submission.\n");
        }
        int chk;
        printf("%s do you need to go back(2) on same tab or to main menu(1) or want to exit(0)\n", Name);
        scanf("%d", &chk);
        system("cls");
        if (chk == 0)
        {
            printf("Hope to see you again, Have a nice day!");
            return 0;
        }
        else if (chk == 2)
        {
            goto back7;
        }
        else
        {
            goto start;
        }
    }
    else if (serial_no == 0)
    {
        printf("Hope to see you again, Have a nice day!");
        return 0;
    }
    else
    {
        printf("Opps you pressed the wrong key!!!.\n");
        goto start;
    }
}