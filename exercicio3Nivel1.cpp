#include <iostream> 

using namespace std;
int main() {
    string letra;
      cout << "digite seu nome: ";
    getline(cin,letra);
    //cin >> letra;  

    if (letra == "a" || letra == "e" || letra == "i" || letra == "o"|| letra == "u") { 
    cout << "essas letras são vogais"<< endl;
    }
    else { 
    cout << "essa letra é consuante"<< endl;    
    }
    return 0;
    }


     

