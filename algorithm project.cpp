
#include<bits/stdc++.h>

#include <string>
using namespace std;

void display()      // A, O+, B+, AB+, A-, O-, B-, AB-

 {
     int bloodgroup[]={0,0,0,0,0,0,0,0};

    cout<<"A +ve:"<<bloodgroup[0]<<endl;
    cout<<"O +ve:"<<bloodgroup[1]<<endl;
    cout<<"B +ve:"<<bloodgroup[2]<<endl;
    cout<<"AB +ve:"<<bloodgroup[3]<<endl;

    cout<<"A -ve:"<<bloodgroup[4]<<endl;
    cout<<"O -ve:"<<bloodgroup[5]<<endl;
    cout<<"B -ve:"<<bloodgroup[6]<<endl;
    cout<<"AB -ve:"<<bloodgroup[7]<<endl;
 }

 void bank()
 {
     string name;
    string address;
    int number;
     cout<< "enter the bank name:"<<endl;
     getline(cin, name);

     cout<<"enter the bank address:"<<endl;
     getline(cin, address);
     cout<<"Enter blood Bank Contact Number :"<<endl;
     cin>>number;
     cout<< "Bank name :"<<name<<endl;
     cout<< "Address   :"<<address<<endl;
     cout<<"contact    :+880"<<number;
            display();
            }




  void patient()
  {

       char name[50];
    char blood_group[20];
   int c,n,pn;

    cout<<"Enter patient  name:";
    cin>>name;
    cout<< "enter patient id :";
    cin>>pn;
    cout<<"Enter patient Blood groupe:";
    cin>>blood_group;



    cout<<"Enter type of blood group you are looking for:"<<endl;

    cout<<"0 = A positive"<<endl<<"1 = O positive"<<endl<<"2 = B positive"<<endl<<
    "3 = AB positive"<<endl<<"4 = A negative"<<endl<<"5 = O negative"<<endl<<
    "6 = B negative"<<endl<<"7 = AB negative"<<endl;


    cin>>c;


    cout<<" thank you for your information " <<name<<endl<<" you will be donated with 1 blood packet"<<endl<<"Please login again to get 1 more blood packet"<<endl;
    cout<<"Namme        :"<<name<<endl;
    cout<<"Patient id   :"<<pn<<endl;
    cout<<"Blood group  :"<<blood_group<<endl;

  }




   void donor()
   {

       char name[50];
       char add[70];
    char sex[15];
    struct date
    {
        int day;
        int month;
        int year;
    }date;

    char blood_group[20];
    //DONOR DETAILS

    //int save();


    int x,c,id,phone;
     cout<<"Enter your name:";
    cin>>name;

    cout<<"Enter your sex:";
    cin>>sex;
    cout<<"Enter donor id:";
    cin>>id;
    cout<< "Donor address:";
    cin>>add;
    cout<<"Donor contact:";
    cin>>phone;




    cout<<"Enter date(DD MM YY):";
    cin>>date.day;
    cin>>date.month;
    cin>>date.year;


    // A, O+, B+, AB+, A-, O-, B-, AB-

    cout<<"Enter donor blood group :"<<endl;

    cout<<"0 = A positive"<<endl<<"1 = O positive"<<endl<<"2 = B positive"<<endl<<
    "3 = AB positive"<<endl<<"4 = A negative"<<endl<<"5 = O negative"<<endl<<
    "6 = B negative"<<endl<<"7 = AB negative"<<endl;

    cin>>c;

    cout<<"how many packets of blood are you donating:";
    cin>>x;
    blood_group[c]+=x;
    char ch;
    cout<<"Do you want your information to be displayed now(Y/N)";
    cin>>ch;

    if(ch=='Y'||ch=='y')

    cout<<"name           :"<<name<<endl;
    cout<<"Sex            :" << sex<<endl;
    cout<<"Address        :"<<add<<endl;
    cout<<"Phone          :"<<phone<<endl;
    cout<<"Date(DD MM YY) :";
    cout<<date.day<<" ";
    cout<<date.month<<" ";
    cout<<date.year<<endl;

    cout<<"Blood group    :";


    switch(c)
    {
            // A, O+, B+, AB+, A-, O-, B-, AB-
        case 0:
            cout<<"0 = A positive"<<endl;
            break;
        case 1:
            cout<<"1 = O positive"<<endl;
            break;
        case 2:
            cout<<"2 = B positive"<<endl;
            break;
        case 3:
            cout<<"3 = AB positive"<<endl;
            break;
        case 4:
            cout<<"4 = A negative"<<endl;
            break;
        case 5:
            cout<<"5 = O negative"<<endl;
            break;
        case 6:
            cout<<"6 = B negative"<<endl;
            break;
        case 7:
            cout<<"7 = AB negative"<<endl;

   }
   cout<<"Packets of blood:"<<x<<endl;
   }

 int main()
 {

     int i=0,j=0;
   int  a[100];
    int b[50];

    int c=0;


    cout<<"|---------------------------------    Blood donation system    ---------------------------|"<<endl;

    cout<<"|---------------------------------    1.Mohammad Tarequl islam ---------------------------|"<<endl;

    cout<<"|---------------------------------    2.Nahidul isalm munna    ---------------------------|"<<endl;

    cout<<"|---------------------------------    3.md Hasan Miah          ---------------------------|"<<endl;

    cout<< ""<<endl;
    cout<< ""<<endl;

    cout<< "|---------------------------------------------------------------------------------------|"<<endl;
     cout<<"|---------------------------------------WELCOME-----------------------------------------|"<<endl;
    cout<< "|---------------------------------------------------------------------------------------|"<<endl;




    while(c!=4)
    {

        cout<< "Enter your choice :"<<endl;
        cout<<" 1.Blood bank  \n 2.donor \n 3.patient  \n 4.exit:";
        cin>>c;
        getchar();
        switch(c)
        {


            case 4:
                break;





            case 3:
            {
                int i=0;
                cout<<"Welcome patient!!!"<<endl;

                patient();
                break;
            }
             case 2:
            {
                int k;
                 int i=0;
                cout<<"welcome donor!!!"<<endl;
                cout<<"Please enter 1 for enter your information:";
                cin>>k;
                if(k==1)

                    donor();

                break;
            }
            case 1:
            {
                bank();

                break;
            }

        }
    }
    return 0;
}

