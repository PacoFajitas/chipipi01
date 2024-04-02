/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:03:58 by tfiguero          #+#    #+#             */
/*   Updated: 2024/04/02 22:31:20 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void reemplazarPalabra(std::string &cadena, const std::string &palabraOriginal, const std::string &palabraNueva) 
{
    std::string nuevaCadena; 
    size_t inicio = 0; 

    while (true) {
        size_t pos = cadena.find(palabraOriginal, inicio); 
        if (pos == std::string::npos)
            break;
        nuevaCadena += cadena.substr(inicio, pos - inicio);
        nuevaCadena += palabraNueva;
        inicio = pos + palabraOriginal.length();
    }
    nuevaCadena += cadena.substr(inicio);
    cadena = nuevaCadena;
}

int main(int argc, char**argv) 
{
    if (argc == 4)
    {
        std::string file = argv[1];
        std::ifstream f_in(file, std::ifstream::in);
        std::ofstream f_out(file + ".replace", std::ofstream::out);
        std::string linea;

        if (!f_in || !f_out)
            std::cout << "Error al abrir el archivo original o al crear el nuevo archivo";
        while(std::getline(f_in, linea))
        {
            reemplazarPalabra(linea, argv[2], argv[3]);
            f_out << linea << std::endl;
        }
    }
    else
        std::cout << "Por favor introduzca los siguientes argumentos: archivo a leer, string que sustituir, string por la que sustituirla";
    return 0;
}