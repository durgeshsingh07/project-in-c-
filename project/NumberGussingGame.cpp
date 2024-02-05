#include<iostream>
using namespace std;
int main()
{
cout<< endl<<"------------------------------------------------------"<<endl;
cout<<endl<<"\twelcome to my game"<<endl<<endl;
string quit;
while (quit.size()==0 ||quit[0]=='y' || quit[0]=='Y')
{

    int dig,lim=1, close=1,guess;
    cout<<" guess the number (<10)=";
    cin >>dig;
    cout<<endl;
    fflush(stdin);

    for (auto i = 1; i<=dig/2; i++)
    close = close*10;
    while (dig--)
    lim = lim * 10;

    int num = rand()%lim;
    cout<<"Number is Generated"<<endl<<endl;

    while (true)
    {
        cout<<" guess the number =";
        cin>>guess;
        fflush(stdin);
       
       if(guess == num)
       break;
       if(abs(num-guess)<=close)
       cout<<"Remarks:- You Guess the Number"<<endl<<endl;
       
       else if (guess < num)
       cout<<"Remarks:- You Guess the Number is to low"<<endl<<endl;

       else if(guess > num)
       cout<<"Remarks:- You Guess the Number is too high"<<endl<<endl;
    }

}
return 0;}



