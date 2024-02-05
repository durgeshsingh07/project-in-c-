#include<iostream>
using namespace std;
int main()
{
cout<<"-------------------------------------------------------"<<endl;

cout<<"welcome to my calculator"<<endl;

long double a,b;
string quit;
int ch;
while(quit.size()==0 ||quit[0]=='y' || quit[0]=='y')
{
cout<<endl<<"ENter the 1st number=";
cin >> a;
fflush(stdin);

cout<<"enter your 2nd number = ";
cin>>b;
fflush(stdin);

cout<<"press:-"<<endl;
cout<<"\t1 -> for Addition" <<endl<<
      "\t2 -> for Subtraction" <<endl<<
      "\t3 -> for Multiplication" <<endl<<    
      "\t4 -> for Division" <<endl;
cout<< "enter your choice number=";
cin>>ch;
fflush(stdin);
cout<<endl;

//Addition
if(ch == 1)
   cout<<"\tResult for("<< a <<" + "<< b <<") =" <<a+b<<endl<<endl;

//subtraction
else if(ch==2){
    cout<<"\tResult for("<< a <<" - "<< b <<") =" <<a-b<<endl<<endl;
    cout<<"\tResult for("<< b <<" -"<< a <<") =" <<b-a<<endl<<endl;
    
}   

//multipliation
else if(ch==3)
    cout<<"\tResult for("<< a <<" * "<< b <<") =" <<a*b<<endl<<endl;

//Division
else if(ch==4){
  if(a == 0 && b==0)
  cout<<"\tsorry,both number are 0 and can't be Divided"<< endl << endl;
  else{
   
  if(b !=0)
    cout<<"\tResult for("<< a <<" / " << b <<")=" << a/b << endl <<endl;
    else
    cout<<"\tsorry,"<< a << "cant't bedivided by 0"<<endl<<endl;

  if(a !=0 )
    cout <<  "\tResult for("<< b <<" / "<< a <<")="<<b/a<< endl <<endl;
    else
    cout<<"\tsorry,"<< b << "cant't bedivided by 0"<<endl<<endl;

}

} 
// No operation
else
    cout<<"\tError:- No such operation code found try again" <<endl <<endl;

cout << "want to continue.......?(y/n) =";
getline(cin,quit);                                         

cout<<"-----------------------------------------------------------------------"<<endl;


}
 return 0;
}