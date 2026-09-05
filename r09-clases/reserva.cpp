#include <string>

class Reserva {
    private:
        std::string sala = "C3";   // invariante 1: no vacia
        int personas = 2;       // invariante 2: entre 1 y 20
        int horaInicio = 12, horaFin = 14;   // inv. 3: 0 <= inicio < fin <= 23

    public:
        bool setSala(std::string s){
            if(s.empty() == true) return false;
            else sala = s; 
            return true;
        }

        bool setPersonas(int p){
            if(p<1 || p>20) return false;
            personas = p;
            return true;
        }

        bool setHoras(int horaI, int horaF){
            if(horaI<0 || horaI>horaF || horaFin>=23) return false;
            horaInicio = horaI; horaFin = horaF;
            return true;
        }
};
