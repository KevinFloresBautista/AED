#include<cassert>
#include<string>
using namespace std::literals;
int main(){
    //Prueba de Assert con Tipo de Dato Bool
    assert (true);
    assert (!false);
    assert (false == false);
    assert (true == true);
    assert (!false == true);
    assert (false == !true);
    assert (!(true==false));
    assert (true or true);   //Disyuncion 
    assert (true or false);
    assert (false or true);
    assert (!(false or false));
    assert (true and true);    //Conjuncion
    assert (!(false and true));
    assert (!(true and false));
    assert (!(false and false));
    assert (true or true and false);
    assert (false or !false and true);
    assert (true and false == false or false);
    assert (true and true == !(false or false));
    assert (true != false);
    assert (!false != false);
    assert (true != !true);
    assert ( false != !false);
    assert (!true != !false);

    //Prueba de Assert con Tipo de Dato Double
    assert (1.0 == 1.0);
    assert (1 == 1.0);
    assert (2.0 == 1.0 + 1.0);
    assert (2.0 == 3.0 - 1.0);
    assert (2.0 != 4.0 - 1.0);
    assert (10.0 == 5.0*2.0);
    assert (5.0 == 2.0 + 2.0 + 0.5 + 0.5);
    assert (10.0 == 20.0/2.0);
    assert (2.0 != 1.0 + 0.1 + 0.1 + + 0.1 + 0.1 + + 0.1 + 0.1 + + 0.1 + 0.1 + 0.1 + 0.1);
    assert (0.5 != 1.0/(0.2 + 0.2 + 0.2 + 0.2 + 0.2 + 0.2 + 0.2 + 0.2 + 0.2 + 0.2));     // (0.2 + 0.2 + 0.2 + 0.2 + 0.2 + 0.2 + 0.2 + 0.2 + 0.2 + 0.2) != 2.0 
    assert (3.0 >= 3.0);
    assert (9.0 > 1.0);
    assert (0.5 < 10.0);
    assert (2.0 <= 2.0);
    assert (40.0/5.0 == 2.0*4.0);

    // Prueba con Tipo de Dato Char // Operacion con la Tabla de ASCII
    assert ('a' == 'a'); // a=97
    assert ('*' != '+'); // * = 42 , + = 43
    assert ('b' > 'a'); // b = 98 , a = 97  entonces  98>97
    assert ('a' < 'z'); // a = 97 , z = 122 entonces 97<122
    assert ('a' + 'b' >= '*' + '+'); // a = 97 , b = 98 , * = 42 , + = 43 entonces 97+98 >= 42+43
    assert ('a' - '@' <= 'b' - '+' ); // a = 97 , b = 98 , @ = 64 , + = 43 entonces 97-64 <= 98-43
    assert ('1' * 'a'- 'a' * '1' == 0); // '1' = 49 , a = 97  entonces  49*97 - 97*49 = 0
    assert ('K'+'E'+'V'+'I'+'N'== 'N'+'I'+'V'+'E'+'K'); 
    assert ('A'/'a' != 'a'/'A');
    assert ('A'-'a' != 'a' - 'A');

    //Prueba con Tipo de Dato INT
    assert (1 == 1);
    assert (-1 != 1);
    assert (-90 <= 100);
    assert (500 >= -45);
    assert (100+45+55 == 200);
    assert (100-45-155 == -100);
    assert (-10*40 == -40*10);
    assert (-4/2 == -4/2);
    assert (-10%2 == 0); //resto de -10/2 es : 0
    assert (10%-3 != 3); //resto de 10%-3 es : 1
    assert (5*4 + 120/4 - 50%30 != -100); // 30 != -100

    //Prueba con Tipo de Dato Unsigned
    assert (4 == 4);
    assert (5 != 9);
    assert (1 <= 64);
    assert (1000 >= 100);
    assert (4 * 10 != 50);
    assert (10 + 50 == 60);
    assert (10 - 10 == 0);
    assert (40/40 == 1);
    assert (100%55 == 45 );

    //Prueba con Tipo de Dato String   // Se Agrega la letra "s" porque si no estamos usando cadenas de C

    assert ("KEVIN"s == "KEVIN"s ); 
    assert ("Kevin"s != "Flores"s);
    assert ("k"s + "e"s + "v"s + "i"s +"n"s == "kevin"s);
    assert ("kevin"s != "KEVIN"s);
    assert ("Kevin"s.length() == 5);
    assert("Kevin"s=="Ke"s+"vin"s);
    assert ("Kevin"s.length() - "Kevin"s.length() == 0);
    assert ("Bautista"s.length() >= "Kevin"s.length());
    assert ("Kevin"s.length() <= "Flores"s.length());
    assert ("Kevin"s.length() != 10);
    assert ("Kevin"s.length() + "Flores"s.length() == 11);
    
    }