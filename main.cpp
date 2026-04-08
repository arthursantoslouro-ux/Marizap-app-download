#include <iostream>
#include <string>
#include <cstdlib>


void falar(std::string texto) {
    std::string comando = "espeak -v pt-br \"" + texto + "\"";
        system(comando.c_str());
}




int main() {
    std::string meunome = "";
    std::string opma = "";


    std::cout << "preparando ambiente para total funcionamento aguarde um pouco" << std::endl;
    system("pkg install espeak > /dev/null 2>&1");


falar("ola, sou, droid, terminal, seu assistente de terminal digite um comando");


    std::string comando = "";

    std::cout  << "DRØID TERMINAL EXECUTADO COM SUCESSO" << std::endl;
   while (true) {
    std::cout << "==== seu asistente de terminal ====\n\ndigite um comando ou converse: " << std::endl;
   
    std::getline(std::cin, comando);








if (comando == "listar") {
    system("ls");
    falar("listando");

}

else if (comando == "abrir youtube") {
    system("am start -a android.intent.action.VIEW -d 'https://youtube.com'");
falar("abrindo youtube");
}

else if (comando == "oi") {
    falar("ola bom dia");
}

else if (comando == "trem") {
    system("pkg install sl > /dev/null 2>&1"); 
    system("sl");
}

else if (comando == "qual é meu nome") {
    falar("eu ainda não sei seu nome me diga agora");
    std::cin >> meunome;
    falar("bem vindo novamente" + meunome);
}

else if (comando == "to entediado") {
    falar("ficar entediado é normal " + meunome + "oque pode te animar");
    std::cin >> opma;
    if (comando.find("jogo") && comando.find("jogar")) {
        falar("que legal jogar é bom tente jogar um jogo calmo"); 
    }
}

}


}
