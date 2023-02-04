#include <iostream>
#include <regex>
#include <string>

using namespace std;

int Oferta(string&);
int Producto(string&);
int Porcentaje(string&);//Check
int Vigencia(string&);//Check
int Nombre(string&);//Check
int Categoria(string&);
int Electrodomestico(string&);//Check
int marcaE(string&);//Check
int Color(string&);//Check
int Consola(string&);//Check
int marcaCon(string&);//Check
int Almacenamiento(string&);//CHeck
int Computadora(string&);//Check
int marcaCom(string&);//Check
int SO_Com(string&);//Chek
int RAM(string&);//Check
int Celular(string&);//check
int marcaCel(string&); //Check
int SO_Cel(string&);//CHeck
int Procesador(string&);//Check
int marcaProc(string&);//Check
int modeloProc(string&);//Check
int Consumible(string&);//Check
int marcaCons(string&);//Check
int Grafica(string&);//check
int marcaGraf(string&);//Check
int modeloGraf(string&);//Check
int Videojuego(string&);//CHeck
int Clasificacion(string&);//Check
int Bocinas(string&);//Check
int marcaBoc(string&);//Check
int Potencia(string&);//check
int Pantalla(string&);//check
int marcaPant(string&);//check
int Tamanio(string&);//check


int main(){
    int i;
    string s[10];
    s[0] = "Consola: XBOX 1 TB series S; 50%/25.00$, Desde: 01 Apr 1999 Hasta: 03 Apr 1999.";
    s[1] = "Electrodomestico: Licuadora; mabe Rojo 50%/25.00$, Desde: 01 Apr 1999 Hasta: 03 Apr 1999.";
    s[2] = "Computadora: DELL Windows 10; 4 GB 1 TB Verde 50%/25.00$, Desde: 01 Apr 1999 Hasta: 03 Apr 1999.";
    s[3] = "Celular: SAMSUNG Amarillo 4 GB Android 11; 50%/25.00$, Desde: 01 Apr 1999 Hasta: 03 Apr 1999.";
    s[4] = "Procesador: AMD Ryzen, 9-5900X 50%/25.00$, Desde: 01 Apr 1999 Hasta: 03 Apr 1999.";
    s[5] = "Consumible: Logitech Azul Teclado; 50%/25.00$, Desde: 01 Apr 1999 Hasta: 03 Apr 1999.";
    s[6] = "Grafica: AMD Radeon, RTX 3080; 50%/25.00$, Desde: 01 Apr 1999 Hasta: 03 Apr 1999.";
    s[7] = "Videojuego: Dragon BAll Xenoverse; ESRB 50%/25.00$, Desde: 01 Apr 1999 Hasta: 03 Apr 1999.";
    s[8] = "Bocinas: JBL 40 W, 50%/25.00$, Desde: 01 Apr 1999 Hasta: 03 Apr 1999.";
    s[9] = "Pantalla: LG 55 pulgadas; 50%/25.00$, Desde: 01 Apr 1999 Hasta: 03 Apr 1999.";

    for(i = 0; i < 10; i++){
        cout << s[i] << endl;
        if(Oferta(s[i]) == 1){
            printf("Cadena valida\n");
        }else{
            cout << "Cadena invalida" << endl;
        }
        cout << s[i] << endl;
        if(i == 9){break;}
    }
}

int Oferta(string &s){
    if(Producto(s) == 1){
        if(Porcentaje(s) == 1){
            s.erase(0,1);
            if(Vigencia(s) == 1){
                s.erase(0,1);
                return 1;
            }else{
                return 0;
            }
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}

int Producto(string &s){
    if(Categoria(s) == 1){
        if(Nombre(s) == 1){
            return 1;
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}

int Categoria(string &s){
    string aux;
    int pos;

    pos = s.find(" ");
    aux = s.substr(0,pos);

    if(aux == "Electrodomestico:"){
        s.erase(0,pos + 1);
        if(Electrodomestico(s) == 1){
            s.insert(0,"a;");
            return 1;
        }else{
        return 0;
        }
    }
    if(aux == "Consola:"){
        s.erase(0,pos + 1);
        if(Consola(s) == 1){
            return 1;
        }else{
            return 0;
        }
    }
    if(aux == "Computadora:"){
        s.erase(0,pos + 1);
        if(Computadora(s) == 1){
            s.insert(0,"a;");
            return 1;
        }else{
            return 0;
        }
    }
    if(aux == "Celular:"){
        s.erase(0,pos + 1);
        if(Celular(s) == 1){
            s.insert(0,"a;");
            return 1;
        }else{
            return 0;
        }
    }
    if(aux == "Procesador:"){
        s.erase(0,pos + 1);//Borra la primera palabra
        if(Procesador(s) == 1){
            s.insert(0,"a;");
            return 1;
        }else{
            return 0;
        }
    }
    if(aux == "Consumible:"){
        s.erase(0,pos + 1);//Borra la primera palabra
        if(Consumible(s) == 1){
           // s.insert(0,"a;");
            return 1;
        }else{
            return 0;
        }
    }
    if(aux == "Grafica:"){
        s.erase(0,pos + 1);//Borra la primera palabra
        if(Grafica(s) == 1){
            s.insert(0,"a;");
            return 1;
        }else{
            return 0;
        }
    }
    if(aux == "Videojuego:"){
        s.erase(0,pos + 1);//Borra la primera palabra
        if(Videojuego(s) == 1){
            s.insert(0,"a;");
            return 1;
        }else{
            return 0;
        }
    }
    if(aux == "Bocinas:"){
        s.erase(0,pos + 1);//Borra la primera palabra
        if(Bocinas(s) == 1){
            s.insert(0,"a;");
            return 1;
        }else{
            return 0;
        }
    }
    if(aux == "Pantalla:"){
        s.erase(0,pos + 1);//Borra la primera palabra
        if(Pantalla(s) == 1){
            s.insert(0,"a;");
            return 1;
        }else{
            return 0;
        }
    }

    return 0;
}

int Consola(string &s){
    if(marcaCon(s) == 1){
        if(Almacenamiento(s) == 1){
            return 1;
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}

int marcaCon(string &s){
    string input;
    int pos;
    
    pos = s.find(" ");

    input = s.substr(0,pos);
    regex pattern("XBOX|NINTENDO|PlayStation");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 1);
        return 1;
    }else{
        return 0;
    }
}

int Almacenamiento(string &s){
    string input;
    int pos;
    
    pos = s.find("B");

    input = s.substr(0,pos + 1);
    regex pattern("125 GB|250 GB|500 GB|1 TB");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 2);//porque es la 'B' + el espacio de la siguiente produccion
        return 1;
    }else{
        return 0;
    }
}

int Nombre(string &s){
    string input;
    int pos;
    
    pos = s.find(";");

    input = s.substr(0,pos);
    regex pattern("[a-zA-ZñÑ ]+");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 2);//porque es la 'B' + el espacio de la siguiente produccion
        return 1;
    }else{
        return 0;
    }
}

int Porcentaje(string &s){
    string input;
    int pos;
    
    pos = s.find(",");

    input = s.substr(0,pos);
    regex pattern("([0-9]+%)/([0-9]+[.]?[0-9]*)([$€mxn])");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 1);//porque es la 'B' + el espacio de la siguiente produccion
        return 1;
    }else{
        return 0;
    }
}

int Vigencia(string &s){
    string input;
    int pos;
    
    pos = s.find(".");

    input = s.substr(0,pos);
    regex pattern("Desde: (0[1-9]|[12][0-9]|3[01]) (Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec) [0-9]{4} Hasta: (0[1-9]|[12][0-9]|3[01]) (Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec) [0-9]{4}");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 1);//porque es la 'B' + el espacio de la siguiente produccion
        return 1;
    }else{
        return 0;
    }
}

int marcaE(string &s ){
    string input;
    int pos;
    
    pos = s.find(" ");

    input = s.substr(0,pos);
    regex pattern("mabe|Osterizer");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 1);
        return 1;
    }else{
        return 0;
    }    
}

int Color(string &s){
    string input;
    int pos;
    
    pos = s.find(" ");

    input = s.substr(0,pos);
    regex pattern("^(Rojo|Azul|Verde|Amarillo|Naranja|Morado|Rosa|Marrón|Gris|Negro|Blanco|Turquesa|Violeta|Indigo|Plateado|Dorado|Bronce|Cobre|Oliva|Verde lima)$");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 1);
        return 1;
    }else{
        return 0;
    }     
}

int Electrodomestico(string &s){
    if(Nombre(s)){
        if(marcaE(s) == 1){
            if(Color(s) == 1){
                return 1;
            }else{
                return 0;
            }
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}

int marcaCom(string &s){
    string input;
    int pos;
    
    pos = s.find(" ");

    input = s.substr(0,pos);
    regex pattern("DELL|Acer|LANIX|HP");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 1);
        return 1;
    }else{
        return 0;
    }
}

int SO_Com(string &s){
    string input;
    int pos;
    
    pos = s.find(";");

    input = s.substr(0,pos);
    regex pattern("Windows 10|Windows 11");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 2);
        return 1;
    }else{
        return 0;
    }
}

int RAM(string &s){
    string input;
    int pos;
    
    pos = s.find("B");

    input = s.substr(0,pos + 1);
    regex pattern("2 GB|4 GB|8 GB|16 GB");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 2);
        return 1;
    }else{
        return 0;
    }
}

int Computadora(string &s){
    if(marcaCom(s) == 1){
        if(SO_Com(s) == 1){
            if(RAM(s) == 1){
                if(Almacenamiento(s) == 1){
                    if(Color(s) == 1){
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int Celular(string &s){
 if(marcaCel(s) == 1){
    if(Color(s) == 1){
        if(RAM(s) == 1){
            if(SO_Cel(s) == 1){
                return 1;
            }
        }
    }
 }
 return 0;   
}

int marcaCel(string &s){
    string input;
    int pos;
    
    pos = s.find(" ");

    input = s.substr(0,pos);
    regex pattern("SAMSUNG|LG|Huawuei");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 1);
        return 1;
    }else{
        return 0;
    }
}

int SO_Cel(string &s){
    string input;
    int pos;
    cout << "Aqui entra:" << s << endl;
    pos = s.find(";");

    input = s.substr(0,pos);
    regex pattern("Android 11|Android 12|EMUI");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 2);
        return 1;
    }else{
        return 0;
    }
}

int Procesador(string &s ){
    if(marcaProc(s) == 1){
        if(modeloProc(s) == 1){
            return 1;
        }
    }
    return 0;
}

int marcaProc(string &s ){
    string input;
    int pos;
    
    pos = s.find(",");

    input = s.substr(0,pos);
    regex pattern("AMD Ryzen|Intel Core");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 2);
        return 1;
    }else{
        return 0;
    }    
}

int modeloProc(string &s){
    string input;
    int pos;
    
    pos = s.find(" ");

    input = s.substr(0,pos);
    regex pattern("i9-11900K|i7-11700K|i5-11600K|9-5900X| 7-5800X|5-5600X");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 1);
        return 1;
    }else{
        return 0;
    } 
}

int Consumible(string &s){
    if(marcaCons(s) == 1){
        if(Color(s) == 1){
            return 1;
        }
    }
    return 0;
}

int marcaCons(string &s){
    string input;
    int pos;
    
    pos = s.find(" ");

    input = s.substr(0,pos);
    regex pattern("Logitech|OMEN");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 1);
        return 1;
    }else{
        return 0;
    }     
}

int Grafica(string &s){
    if(marcaGraf(s) == 1){
        if(modeloGraf(s) == 1){
            return 1;
        }
    }
    return 0;
}

int marcaGraf(string &s){
    string input;
    int pos;
    
    pos = s.find(",");

    input = s.substr(0,pos);
    regex pattern("NVIDIA GeForce|AMD Radeon");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 2);
        return 1;
    }else{
        return 0;
    }      
}

int modeloGraf(string &s){
    string input;
    int pos;
    
    pos = s.find(";");

    input = s.substr(0,pos);
    regex pattern("RTX 3080|GTX 1660 Super|RX 6900 XT");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 2);
        return 1;
    }else{
        return 0;
    }   
}

int Videojuego(string &s){
    if(Nombre(s) == 1){
        if(Clasificacion(s) == 1){
            return 1;
        }
    }
    return 0;
}

int Clasificacion(string &s){
    string input;
    int pos;
    
    pos = s.find(" ");

    input = s.substr(0,pos);
    regex pattern("ESRB|10+|17+|18+");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 1);
        return 1;
    }else{
        return 0;
    } 
}

int Bocinas(string &s){
    if(marcaBoc(s) == 1){
        if(Potencia(s) == 1){
            return 1;
        }
    }
    return 0;
}

int marcaBoc(string &s){
    string input;
    int pos;
    
    pos = s.find(" ");

    input = s.substr(0,pos);
    regex pattern("Vorago|JBL|SONY");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 1);
        return 1;
    }else{
        return 0;
    }     
}

int Potencia(string &s){
    string input;
    int pos;
    
    pos = s.find(",");

    input = s.substr(0,pos);
    regex pattern("40 W|60 W|80 W");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 2);
        return 1;
    }else{
        return 0;
    }   
}

int Pantalla(string &s){
    if(marcaPant(s) == 1){
        if(Tamanio(s) == 1){
            return 1;
        }
    }
    return 0;
}

int marcaPant(string &s){
    string input;
    int pos;
    
    pos = s.find(" ");

    input = s.substr(0,pos);
    regex pattern("SAMSUNG|DELL|LG");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 1);
        return 1;
    }else{
        return 0;
    }
}

int Tamanio(string &s){
    string input;
    int pos;
    
    pos = s.find(";");

    input = s.substr(0,pos);
    regex pattern("(21.5|24|55) pulgadas");

    if(regex_match(input, pattern)){
        s.erase(0,pos + 2);
        return 1;
    }else{
        return 0;
    }    
}