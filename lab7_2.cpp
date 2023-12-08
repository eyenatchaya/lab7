#include<iostream>
#include<string>
using namespace std;

int main()
{
string ans ;
cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
cout << "?????: ";
getline(cin,ans);
cout << "Fahsai: Wow!!! " << ans << " is a really cool name.\n";

int id;
cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
cout << ans << ": ";
cin >> id;
cin.ignore();
cout << "Fahsai: I think you may be GEAR "<< (id/10000000)-12 << ". I have a free movie ticket for you.\n";
cout << "Fahsai: Let's go to the cinema together!!!\n";

string namemovie;
cout << "Fahsai: What movie do you want to watch?\n";
cout << ans << ": ";
getline(cin,namemovie);

string day;
cout << "Fahsai: So....which day are you free to go with me?\n";
cout << ans << ": ";
getline(cin,day);

cout << "Fahsai: " << day <<"....that is OK!!! I'm looking forward to watching "<< namemovie << " with you.\n";
cout << ans << ": ";

string z;
getline(cin,z);
cout << " Fahsai: 555+ see you" <<day<<". Bye Bye \\(^ ^)/\n";

 
return 0 ;
}
