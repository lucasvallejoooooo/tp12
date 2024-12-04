#include<iostream>
#include<stdlib.h>
using namespace std;
class Persona{
    private: //......
        string nombre;
        int edad;
    public: //......
        Persona(string,int); //......
        void mostrarPersona();
};
class Empleado : public Persona{
    private: //......
        float sueldo;
    public: //......
        Empleado(string,int,float); //......
        void mostrarEmpleado();
};
class Estudiante : public Persona{
    private: //......
        float notaFinal;
    public: //......
        Estudiante(string,int,float);
        void mostrarEstudiante();
};
class Tecnico : public Estudiante{
    private: //......
        string especialidad;
    public:
        Tecnico(string,int,float,string); //......
        void mostrarTecnico();
};
// ......
Persona::Persona(string _nombre,int _edad){
    nombre = _nombre;
    edad = _edad;
}
void Persona::mostrarPersona(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}
// ......
Empleado::Empleado(string _nombre,int _edad,float _sueldo) : Persona(_nombre,_edad){
    sueldo = _sueldo;
}
void Empleado::mostrarEmpleado(){
    mostrarPersona();
    cout<<"Sueldo: "<<sueldo<<endl;
}
// ......
Estudiante::Estudiante(string _nombre,int _edad,float _notaFinal) : Persona(_nombre,_edad){
    notaFinal = _notaFinal;
}
void Estudiante::mostrarEstudiante(){
    mostrarPersona();
    cout<<"Nota Final: "<<notaFinal<<endl;
}
// ......
Tecnico::Tecnico(string _nombre,int _edad,float _notaFinal,string _especialidad) : Estudiante(_nombre,_edad,_notaFinal){
    especialidad = _especialidad;
}
void Tecnico::mostrarTecnico(){
    mostrarEstudiante();
    cout<<"Especialidad: "<<especialidad<<endl;
}
int main(){
    Empleado empleado1("Juan",35,1300000);
    cout<<"-Empleado-"<<endl;
    empleado1.mostrarEmpleado();
    cout<<"\n";
       Estudiante estudiante1("Maria",21,16.7);
    cout<<"-Estudiante-"<<endl;
    estudiante1.mostrarEstudiante();
    cout<<"\n";
   
    Tecnico tecnico1("Alejandro",20,15.6,"Informatica");
    cout<<"-Tecnico-"<<endl;
    tecnico1.mostrarTecnico();
    cout<<"\n";
   
    return 0;
}
