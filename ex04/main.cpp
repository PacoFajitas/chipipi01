/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:03:58 by tfiguero          #+#    #+#             */
/*   Updated: 2024/04/04 18:14:02 by codespace        ###   ########.fr       */
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
    if (argc != 4)
    {
        std::cout << "Por favor introduzca los siguientes argumentos: archivo a leer,";
        std::cout << " string que sustituir, string por la que sustituirla" << std::endl;
    return 0;
    }
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string file = argv[1];
    std::ifstream ifs;
    ifs.open(file.c_str(), std::ios_base::in);
    file += ".replace";
    std::ofstream ofs;
    ofs.open(file.c_str(), std::ios_base::out);
    std::string linea;
    if (!ifs.is_open() || !ofs.is_open())
        std::cout << "Error al abrir el archivo original o al crear el nuevo archivo";
    while(std::getline(ifs, linea))
    {
        reemplazarPalabra(linea, s1, s2);
        ofs << linea << std::endl;
    }
    return 0;
}