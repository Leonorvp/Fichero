#include <iostream>
#include<fstream>
using namespace std;
int main (){
string a;
ofstream fich ("Silvia.txt");
cout<<"Ingrese una palabra:\n";
 getline(cin,a);
fich<<a;
}
