#ifndef __PERSONA_H__
#define __PERSONA_H__


class Persona
{
  private:
    char* nombres;
    char* apellidos;
    char* iD;
    char* direccion;
    char* ciudad;
    char* teléfono;
  public:
    Persona();
    void setNombres(char* nombres);
    char* getNombres();
    void setapellidos(char* apellidos);
    char* getapellidos();
    void setiD(char* iD);
    char* getiD();
    void setDireccion(char* direccion);
    char* getDireccion();
    void setCiudad(char* ciudad);
    char* getCiudad();
    void setTelefono(char* telefono);
    char* getTelefono();

};


#endif  //__PERSONA_H__ eof
