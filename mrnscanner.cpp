#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

char command1[200];
char command2[200];
char command3[200];

string name;
string surname;
string city;

char nm[100];
char srnm[100];
char cty[100];

void echo(string m){

     cout << m << endl;

}


int main()
{

     system("clear");          

     cout << endl << endl;
     
     echo ("                         /$$                                        ");
     echo ("                        |__/                                        ");
     echo (" /$$  /$$  /$$ /$$   /$$ /$$ /$$$$$$$   /$$$$$$   /$$$$$$  /$$   /$$");
     echo ("| $$ | $$ | $$| $$  | $$| $$| $$__  $$ |____  $$ /$$__  $$| $$  | $$");
     echo ("| $$ | $$ | $$| $$  | $$| $$| $$  \ $$  /$$$$$$$| $$  \__/| $$  | $$");
     echo ("| $$ | $$ | $$| $$  | $$| $$| $$  | $$ /$$__  $$| $$      | $$  | $$");
     echo ("|  $$$$$/$$$$/|  $$$$$$/| $$| $$  | $$|  $$$$$$$| $$      |  $$$$$$/");
     echo (" \_____/\___/  \______/ |__/|__/  |__/ \_______/|__/       \______/ ");
     echo ("                                                                    ");
     echo ("                                                                    ");
     echo ("                                                                    ");

     while (true) {

     system("touch namedata.txt");
     system("touch surnamedata.txt");
     system("touch finaldata.txt");

     cout << " __________________________________________"  << endl;
     cout << "(__________________________________________)" << endl;
     cout << "|------------| Mernis Tarayıcı |-----------|" << endl;
     cout << "| Dev : NSS22                              |" << endl;
     cout << "| Version : 0.0.1                          |" << endl;
     cout << "| Dev TEAM : wuinaru.238                   |" << endl;
     cout << "|__________________________________________|" << endl;
     cout << "(__________________________________________)" << endl;

     cout << endl;

     cout << "Mernis dosyası ile aynı klasörde olması gerekir." << endl;
     cout << "Mernis dosyasının adı data_dump.sql şeklinde olmalıdır" << endl;

     cout << endl;
     cout << endl;

     cout << "Kullanıcı adı : NSS22 " << endl;
     cout << endl << endl;

     cout << "| --- İsim" << endl
          << "| --- > ";
     getline(cin , name);

     cout << endl;

     cout << "| --- Soyisim" << endl
          << "| --- > ";
     getline(cin , surname);

     cout << endl;

     cout << "| --- Sehir" << endl
          << "| --- > ";
     getline(cin , city);

     cout << endl;

     cout << "------ | Tarama başladı | ------" << endl;
     cout << endl;
     cout << "İsim : " << name << endl;
     cout << "Soyisim : " << surname << endl;
     cout << "Şehir : " << city << endl;

     cout << endl;

     system("rm namedata.txt");
     system("rm surnamedata.txt");
     system("rm finaldata.txt");

     strcpy(srnm, surname.c_str());
     strcpy(nm, name.c_str());
     strcpy(cty, city.c_str());

     strcat(command1 , "grep \"");
     strcat(command1 , nm);
     strcat(command1 , "\"");
     strcat(command1 , " data_dump.sql > namedata.txt");

     system(command1);

     strcat(command2 , "grep \"");
     strcat(command2 , srnm);
     strcat(command2 , "\" ");
     strcat(command2 , "namedata.txt > surnamedata.txt");

     system(command2);

     strcat(command3 , "grep \"");
     strcat(command3 , cty);
     strcat(command3 , "\" ");
     strcat(command3 , "surnamedata.txt > finaldata.txt");

     system(command3);

     system("nano finaldata.txt");

     }

}
